//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCLogger;

@interface SCOperaBlizzardLogger : NSObject
{
    SCLogger *_logger;
    _Bool _shouldSamplePlaybackMetrics;
}

- (void).cxx_destruct;
- (_Bool)_shouldLogPlaybackMetrics;
- (id)initWithLogger:(id)arg1;
- (void)logPlaybackIntentToNext:(id)arg1;
- (void)logPlaybackIntentToNext:(id)arg1 date:(id)arg2 mediaTime:(double)arg3;

@end

