//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCNMessagingCreateConversationCallback-Protocol.h"

@interface SCArroyoCreateConversationCallback : NSObject <SCNMessagingCreateConversationCallback>
{
    CDUnknownBlockType _successCallback;
    CDUnknownBlockType _failureCallback;
}

- (void).cxx_destruct;
- (id)initWithSuccessHandler:(CDUnknownBlockType)arg1 failureHandler:(CDUnknownBlockType)arg2;
- (void)onError:(long long)arg1;
- (void)onSuccess:(id)arg1;

@end

