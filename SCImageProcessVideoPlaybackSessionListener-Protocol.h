//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCImageProcessVideoPlaybackSession;

@protocol SCImageProcessVideoPlaybackSessionListener <NSObject>

@optional
- (void)videoPlaybackSession:(SCImageProcessVideoPlaybackSession *)arg1 didRenderFrameAtTime:(CDStruct_1b6d18a9)arg2;
- (void)videoPlaybackSession:(SCImageProcessVideoPlaybackSession *)arg1 willRenderFrame:(struct __CVBuffer *)arg2 atTime:(CDStruct_1b6d18a9)arg3;
- (void)videoPlaybackSessionPlayerItemBufferDidBecomeEmpty:(SCImageProcessVideoPlaybackSession *)arg1;
- (void)videoPlaybackSessionPlayerItemLikelyToKeepUp:(SCImageProcessVideoPlaybackSession *)arg1;
- (void)videoPlaybackSessionWillLoopVideo:(SCImageProcessVideoPlaybackSession *)arg1 currentPlayerTime:(CDStruct_1b6d18a9)arg2;
@end

