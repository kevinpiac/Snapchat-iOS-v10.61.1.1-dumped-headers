//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TCV3PresenceServiceDelegate-Protocol.h"

@interface TCV3PresenceServiceDelegateCppProxy : NSObject <TCV3PresenceServiceDelegate>
{
    struct Handle<std::__1::shared_ptr<talkcorev3::PresenceServiceDelegate>, std::__1::shared_ptr<talkcorev3::PresenceServiceDelegate>> _cppRefHandle;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)getParticipantUsernames:(id)arg1;
- (id)getParticipants:(id)arg1;
- (id)getUserIdMap:(id)arg1 conversationId:(id)arg2;
- (id)initWithCpp:(const shared_ptr_a60f1bfa *)arg1;
- (void)notifyActiveConversationsChanged;
- (void)sendPresenceMessage:(id)arg1;

@end
