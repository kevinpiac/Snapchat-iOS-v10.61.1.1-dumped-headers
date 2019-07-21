//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCFrameSource-Protocol.h"

@class NSString;
@protocol SCImageFrameSourceDelegate;

@interface SCImageFrameSource : NSObject <SCFrameSource>
{
    struct __CVBuffer *_pixelBuffer;
    double _startPlayHostTime;
    double _itemTimePlayOffset;
    _Bool _isPlaying;
    _Bool didProcessFirstFrame;
    double _rate;
    long long _renderOrientation;
    id <SCImageFrameSourceDelegate> _delegate;
    CDStruct_1b6d18a9 _itemTimeStartOffset;
    CDStruct_1b6d18a9 _duration;
}

- (void).cxx_destruct;
- (struct __CVBuffer *)acquirePixelBufferForItemTime:(CDStruct_1b6d18a9)arg1 itemTimeForDisplay:(CDStruct_1b6d18a9 *)arg2;
- (void)cancelReading;
- (void)dealloc;
@property(nonatomic) __weak id <SCImageFrameSourceDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool didProcessFirstFrame; // @synthesize didProcessFirstFrame;
@property(nonatomic) CDStruct_1b6d18a9 duration; // @synthesize duration=_duration;
- (_Bool)hasNewPixelBufferForItemTime:(CDStruct_1b6d18a9)arg1;
- (id)initWithPixelBuffer:(struct __CVBuffer *)arg1 imageOrientation:(long long)arg2 duration:(CDStruct_1b6d18a9)arg3;
- (_Bool)isSourceReady;
- (CDStruct_1b6d18a9)itemTimeForHostTime:(double)arg1;
- (CDStruct_e83c9415)itemTimeRange;
@property(nonatomic) CDStruct_1b6d18a9 itemTimeStartOffset; // @synthesize itemTimeStartOffset=_itemTimeStartOffset;
@property(nonatomic) double rate; // @synthesize rate=_rate;
@property(nonatomic) long long renderOrientation; // @synthesize renderOrientation=_renderOrientation;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1;
- (void)startReading;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

