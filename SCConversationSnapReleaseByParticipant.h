//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface SCConversationSnapReleaseByParticipant : NSObject <NSCopying>
{
    NSString *_participantAsRecipient;
    double _releaseInEpochSecs;
    NSString *_lastReleasedSnapId;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithParticipantAsRecipient:(id)arg1 releaseInEpochSecs:(double)arg2 lastReleasedSnapId:(id)arg3;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *lastReleasedSnapId; // @synthesize lastReleasedSnapId=_lastReleasedSnapId;
@property(readonly, copy, nonatomic) NSString *participantAsRecipient; // @synthesize participantAsRecipient=_participantAsRecipient;
@property(readonly, nonatomic) double releaseInEpochSecs; // @synthesize releaseInEpochSecs=_releaseInEpochSecs;

@end

