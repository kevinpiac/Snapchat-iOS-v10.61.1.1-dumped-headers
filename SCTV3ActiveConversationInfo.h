//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCTV3ActiveConversationInfo-Protocol.h"

@class NSString, TCV3ActiveConversationInfo;

@interface SCTV3ActiveConversationInfo : NSObject <SCTV3ActiveConversationInfo>
{
    TCV3ActiveConversationInfo *_core;
}

- (void).cxx_destruct;
- (unsigned long long)callMedia;
- (id)callParticipants;
- (id)caller;
- (id)cognacParticipants;
- (id)initWithCore:(id)arg1;
- (_Bool)isCalling;
- (id)typingParticipants;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

