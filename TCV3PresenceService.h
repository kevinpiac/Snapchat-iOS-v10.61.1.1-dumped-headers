//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TCV3PresenceService : NSObject
{
    struct Handle<std::__1::shared_ptr<talkcorev3::PresenceService>, std::__1::shared_ptr<talkcorev3::PresenceService>> _cppRefHandle;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)getActiveConversations;
- (id)initWithCpp:(const shared_ptr_a98b9edb *)arg1;
- (void)processChatConnectivityStatusChange:(_Bool)arg1;
- (void)processChatMessage:(id)arg1;
- (void)setDelegate:(id)arg1;

@end

