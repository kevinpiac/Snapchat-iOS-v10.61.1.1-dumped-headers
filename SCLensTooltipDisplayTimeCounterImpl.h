//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "SCLensTooltipDisplayTimeCounter-Protocol.h"

@class NSDate, NSString;
@protocol SCReplyWithLensTooltipManager;

@interface SCLensTooltipDisplayTimeCounterImpl : NSObject <SCLensTooltipDisplayTimeCounter, NSCoding>
{
    _Bool _isRunning;
    double _elapsedDisplayTime;
    double _maxTooltipDisplayTime;
    NSDate *_currentDisplayStartDate;
    CDUnknownBlockType _elapsedTimeHandler;
    id <SCReplyWithLensTooltipManager> _replyWithLensTooltipManager;
}

- (void).cxx_destruct;
- (void)_cancelElapsedTimeHandler;
- (double)_elapsedDisplayTime;
- (_Bool)_isTooltipDisplayTimeElapsed;
- (void)_pauseDisplayingWithPauseDate:(id)arg1;
- (void)_reset;
- (void)_resumeTooltipDisplaying;
- (void)_setMaxTooltipDisplayTime:(double)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)pauseTooltipDisplayingIfNecessary;
@property(nonatomic) __weak id <SCReplyWithLensTooltipManager> replyWithLensTooltipManager; // @synthesize replyWithLensTooltipManager=_replyWithLensTooltipManager;
- (void)resumeTooltipDisplayingWithTimeout:(double)arg1 timeoutHandler:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

