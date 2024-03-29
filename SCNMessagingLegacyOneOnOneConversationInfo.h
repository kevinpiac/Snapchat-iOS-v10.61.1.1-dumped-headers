//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, SCNMessagingLegacyOneOnOneSequenceNumbers;

@interface SCNMessagingLegacyOneOnOneConversationInfo : NSObject
{
    SCNMessagingLegacyOneOnOneSequenceNumbers *_conversationVersionInfo;
    NSArray *_unviewedReceivedSnaps;
    NSArray *_unexpiredSentSnaps;
}

+ (id)LegacyOneOnOneConversationInfoWithConversationVersionInfo:(id)arg1 unviewedReceivedSnaps:(id)arg2 unexpiredSentSnaps:(id)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) SCNMessagingLegacyOneOnOneSequenceNumbers *conversationVersionInfo; // @synthesize conversationVersionInfo=_conversationVersionInfo;
- (id)description;
- (id)initWithConversationVersionInfo:(id)arg1 unviewedReceivedSnaps:(id)arg2 unexpiredSentSnaps:(id)arg3;
@property(readonly, nonatomic) NSArray *unexpiredSentSnaps; // @synthesize unexpiredSentSnaps=_unexpiredSentSnaps;
@property(readonly, nonatomic) NSArray *unviewedReceivedSnaps; // @synthesize unviewedReceivedSnaps=_unviewedReceivedSnaps;

@end

