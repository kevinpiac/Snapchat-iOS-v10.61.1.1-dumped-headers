//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCMovableView-Protocol.h"
#import "SCTouchControllable-Protocol.h"

@class NSString;

@interface SCTouchControlUIView : UIView <SCTouchControllable, SCMovableView>
{
    _Bool _useTouchCenterAsPivot;
    _Bool _deleted;
    double _scale;
    double _rotation;
    struct CGAffineTransform _rotationTransform;
    struct CGAffineTransform _scaleTransform;
}

- (void)_recomputeTransform;
@property(nonatomic) _Bool deleted; // @synthesize deleted=_deleted;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic, getter=isUseTouchCenterAsPivot) _Bool useTouchCenterAsPivot; // @synthesize useTouchCenterAsPivot=_useTouchCenterAsPivot;
@property(readonly, nonatomic) double maxScale;
- (void)pan:(id)arg1;
- (void)pinch:(id)arg1;
@property(nonatomic) double rotation; // @synthesize rotation=_rotation;
- (void)rotation:(id)arg1;
@property(nonatomic) struct CGAffineTransform rotationTransform; // @synthesize rotationTransform=_rotationTransform;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(nonatomic) struct CGAffineTransform scaleTransform; // @synthesize scaleTransform=_scaleTransform;
@property(nonatomic) struct CGPoint translation;

// Remaining properties
@property(nonatomic) struct CGRect bounds;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

