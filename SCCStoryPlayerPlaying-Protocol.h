//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"
#import "SCComposerJsConvertible-Protocol.h"

@class SCCStoryPlayerPlaybackOptions, SCComposerRef;

@protocol SCCStoryPlayerPlaying <NSObject, SCComposerJsConvertible>
- (_Bool)isPresenting;
- (void)playItemsWithItemProvider:(void (^)(void (^)(SCCStoryPlayerItems *, NSString *)))arg1 baseView:(SCComposerRef *)arg2 options:(SCCStoryPlayerPlaybackOptions *)arg3 callback:(void (^)(NSString *))arg4;
@end

