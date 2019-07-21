//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SCTalkRPC;

@interface SCLensSharedStateController : NSObject
{
    id <SCTalkRPC> _talkRPC;
    struct unordered_map<int, std::__1::shared_ptr<SCLensSharedStateClient>, std::__1::hash<int>, std::__1::equal_to<int>, std::__1::allocator<std::__1::pair<const int, std::__1::shared_ptr<SCLensSharedStateClient>>>> _sharedStateClients;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)_createSharedState:(int)arg1 uriRequest:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (id)_getQueryStringValue:(id)arg1 fromUrl:(id)arg2;
- (_Bool)handleSharedStateUriRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithTalkRPC:(id)arg1;
- (void)reset;

@end
