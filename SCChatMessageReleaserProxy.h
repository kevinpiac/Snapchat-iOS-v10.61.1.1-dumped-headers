//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSProxy.h>

@protocol SCChatMessageReleaser;

@interface SCChatMessageReleaserProxy : NSProxy
{
    id <SCChatMessageReleaser> _v3Releaser;
    id <SCChatMessageReleaser> _arroyoReleaser;
    _Bool _isArroyoConversation;
}

- (void).cxx_destruct;
- (id)_activeMessageReleaser;
- (Class)class;
- (_Bool)conformsToProtocol:(id)arg1;
- (id)debugDescription;
- (id)description;
- (void)forwardInvocation:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)initWithV3MessageRelease:(id)arg1 arroyoMessageReleaser:(id)arg2;
- (_Bool)isKindOfClass:(Class)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;

@end

