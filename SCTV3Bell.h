//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCTV3RingingProtocol-Protocol.h"

@class NSString, UIImageView;

@interface SCTV3Bell : UIView <SCTV3RingingProtocol>
{
    UIImageView *_bellImageView;
    _Bool _ringing;
}

- (void).cxx_destruct;
- (void)_animateBellForPhase:(unsigned long long)arg1;
- (void)_setupBellImageView;
- (id)init;
- (void)setTintColor:(id)arg1;
- (void)startRingingAnimation;
- (void)stopRingingAnimation;
- (id)tintColor;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

