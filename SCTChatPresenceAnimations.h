//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCTChatPresenceAnimations-Protocol.h"

@class NSString;

@interface SCTChatPresenceAnimations : NSObject <SCTChatPresenceAnimations>
{
    CDUnknownBlockType _changeMediaAnimation;
    CDUnknownBlockType _changePresenceOrderAnimation;
    CDUnknownBlockType _enterFullscreenAnimation;
    CDUnknownBlockType _exitFullscreenAnimation;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType changeMediaAnimation; // @synthesize changeMediaAnimation=_changeMediaAnimation;
@property(copy, nonatomic) CDUnknownBlockType changePresenceOrderAnimation; // @synthesize changePresenceOrderAnimation=_changePresenceOrderAnimation;
@property(copy, nonatomic) CDUnknownBlockType enterFullscreenAnimation; // @synthesize enterFullscreenAnimation=_enterFullscreenAnimation;
@property(copy, nonatomic) CDUnknownBlockType exitFullscreenAnimation; // @synthesize exitFullscreenAnimation=_exitFullscreenAnimation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

