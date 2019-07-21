//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface SCStoriesSnapPlaybackAudioStitchSnap : NSObject <NSCopying>
{
    NSString *_submissionId;
    double _startTime;
    double _endTime;
    long long _positionIndex;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) double endTime; // @synthesize endTime=_endTime;
- (unsigned long long)hash;
- (id)initWithSubmissionId:(id)arg1 startTime:(double)arg2 endTime:(double)arg3 positionIndex:(long long)arg4;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) long long positionIndex; // @synthesize positionIndex=_positionIndex;
@property(readonly, nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(readonly, copy, nonatomic) NSString *submissionId; // @synthesize submissionId=_submissionId;

@end
