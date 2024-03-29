//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface TCV3ActiveConversationInfo : NSObject
{
    _Bool _calling;
    NSString *_caller;
    long long _callMedia;
    NSArray *_callParticipants;
    NSArray *_typingParticipants;
    NSArray *_cognacParticipants;
}

+ (id)ActiveConversationInfoWithCalling:(_Bool)arg1 caller:(id)arg2 callMedia:(long long)arg3 callParticipants:(id)arg4 typingParticipants:(id)arg5 cognacParticipants:(id)arg6;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long callMedia; // @synthesize callMedia=_callMedia;
@property(readonly, nonatomic) NSArray *callParticipants; // @synthesize callParticipants=_callParticipants;
@property(readonly, nonatomic) NSString *caller; // @synthesize caller=_caller;
@property(readonly, nonatomic) _Bool calling; // @synthesize calling=_calling;
@property(readonly, nonatomic) NSArray *cognacParticipants; // @synthesize cognacParticipants=_cognacParticipants;
- (id)description;
- (id)initWithCalling:(_Bool)arg1 caller:(id)arg2 callMedia:(long long)arg3 callParticipants:(id)arg4 typingParticipants:(id)arg5 cognacParticipants:(id)arg6;
@property(readonly, nonatomic) NSArray *typingParticipants; // @synthesize typingParticipants=_typingParticipants;

@end

