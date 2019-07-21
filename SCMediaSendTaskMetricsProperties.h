//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSDictionary, NSMutableArray, NSString;
@protocol SCChatMessage;

@interface SCMediaSendTaskMetricsProperties : NSObject <NSCoding>
{
    _Bool _isForwarded;
    NSString *_correspondentIDToLog;
    NSMutableArray *_mischiefSnapIDsToLog;
    NSDictionary *_snapIdsAndTimestampsToLog;
    NSMutableArray *_mischiefIDsToLog;
    NSString *_groupInviteIDToLog;
    NSMutableArray *_recipientsToLog;
    id <SCChatMessage> _mediaMessageToLog;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *correspondentIDToLog; // @synthesize correspondentIDToLog=_correspondentIDToLog;
- (void)encodeWithCoder:(id)arg1;
@property(retain, nonatomic) NSString *groupInviteIDToLog; // @synthesize groupInviteIDToLog=_groupInviteIDToLog;
- (id)init;
- (id)initWithCoder:(id)arg1;
@property(nonatomic) _Bool isForwarded; // @synthesize isForwarded=_isForwarded;
@property(retain, nonatomic) id <SCChatMessage> mediaMessageToLog; // @synthesize mediaMessageToLog=_mediaMessageToLog;
@property(retain, nonatomic) NSMutableArray *mischiefIDsToLog; // @synthesize mischiefIDsToLog=_mischiefIDsToLog;
@property(retain, nonatomic) NSMutableArray *mischiefSnapIDsToLog; // @synthesize mischiefSnapIDsToLog=_mischiefSnapIDsToLog;
@property(retain, nonatomic) NSMutableArray *recipientsToLog; // @synthesize recipientsToLog=_recipientsToLog;
@property(retain, nonatomic) NSDictionary *snapIdsAndTimestampsToLog; // @synthesize snapIdsAndTimestampsToLog=_snapIdsAndTimestampsToLog;

@end

