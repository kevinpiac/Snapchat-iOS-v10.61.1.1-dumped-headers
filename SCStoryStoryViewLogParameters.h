//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface SCStoryStoryViewLogParameters : NSObject <NSCopying>
{
    _Bool _fullyViewed;
    long long _storyType;
    long long _storyTypeSpecific;
    NSString *_posterId;
    double _storyTimeViewed;
    double _totalStoryTime;
    unsigned long long _numSnaps;
    unsigned long long _numSnapsViewed;
    unsigned long long _numSnapsUniqueViewed;
    long long _entryReason;
    long long _exitReason;
    long long _viewLocationPos;
    long long _viewSource;
    long long _playMode;
    long long _storyAccessType;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) long long entryReason; // @synthesize entryReason=_entryReason;
@property(readonly, nonatomic) long long exitReason; // @synthesize exitReason=_exitReason;
@property(readonly, nonatomic) _Bool fullyViewed; // @synthesize fullyViewed=_fullyViewed;
- (unsigned long long)hash;
- (id)initWithStoryType:(long long)arg1 storyTypeSpecific:(long long)arg2 posterId:(id)arg3 storyTimeViewed:(double)arg4 totalStoryTime:(double)arg5 numSnaps:(unsigned long long)arg6 numSnapsViewed:(unsigned long long)arg7 numSnapsUniqueViewed:(unsigned long long)arg8 entryReason:(long long)arg9 exitReason:(long long)arg10 fullyViewed:(_Bool)arg11 viewLocationPos:(long long)arg12 viewSource:(long long)arg13 playMode:(long long)arg14 storyAccessType:(long long)arg15;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) unsigned long long numSnaps; // @synthesize numSnaps=_numSnaps;
@property(readonly, nonatomic) unsigned long long numSnapsUniqueViewed; // @synthesize numSnapsUniqueViewed=_numSnapsUniqueViewed;
@property(readonly, nonatomic) unsigned long long numSnapsViewed; // @synthesize numSnapsViewed=_numSnapsViewed;
@property(readonly, nonatomic) long long playMode; // @synthesize playMode=_playMode;
@property(readonly, copy, nonatomic) NSString *posterId; // @synthesize posterId=_posterId;
@property(readonly, nonatomic) long long storyAccessType; // @synthesize storyAccessType=_storyAccessType;
@property(readonly, nonatomic) double storyTimeViewed; // @synthesize storyTimeViewed=_storyTimeViewed;
@property(readonly, nonatomic) long long storyType; // @synthesize storyType=_storyType;
@property(readonly, nonatomic) long long storyTypeSpecific; // @synthesize storyTypeSpecific=_storyTypeSpecific;
@property(readonly, nonatomic) double totalStoryTime; // @synthesize totalStoryTime=_totalStoryTime;
@property(readonly, nonatomic) long long viewLocationPos; // @synthesize viewLocationPos=_viewLocationPos;
@property(readonly, nonatomic) long long viewSource; // @synthesize viewSource=_viewSource;

@end
