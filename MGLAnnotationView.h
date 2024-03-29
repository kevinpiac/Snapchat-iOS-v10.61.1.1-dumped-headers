//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "NSSecureCoding-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class MGLMapView, NSString, UILongPressGestureRecognizer, UIPanGestureRecognizer;
@protocol MGLAnnotation;

@interface MGLAnnotationView : UIView <UIGestureRecognizerDelegate, NSSecureCoding>
{
    _Bool _scalesWithViewingDistance;
    _Bool _rotatesToMatchCamera;
    _Bool _selected;
    _Bool _enabled;
    _Bool _draggable;
    id <MGLAnnotation> _annotation;
    NSString *_reuseIdentifier;
    unsigned long long _dragState;
    UIPanGestureRecognizer *_panGestureRecognizer;
    UILongPressGestureRecognizer *_longPressRecognizer;
    MGLMapView *_mapView;
    struct CGVector _centerOffset;
    struct CATransform3D _lastAppliedScaleTransform;
    struct CATransform3D _lastAppliedRotateTransform;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
- (void)accessibilityDecrement;
- (struct CGRect)accessibilityFrame;
- (id)accessibilityHint;
- (void)accessibilityIncrement;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityValue;
@property(retain, nonatomic) id <MGLAnnotation> annotation; // @synthesize annotation=_annotation;
- (struct CGPoint)center;
@property(nonatomic) struct CGVector centerOffset; // @synthesize centerOffset=_centerOffset;
- (void)commonInitWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;
- (void)disableDrag;
@property(readonly, nonatomic) unsigned long long dragState; // @synthesize dragState=_dragState;
- (void)enableDrag;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)handleLongPress:(id)arg1;
- (void)handlePan:(id)arg1;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithReuseIdentifier:(id)arg1;
- (_Bool)isAccessibilityElement;
@property(nonatomic, getter=isDraggable) _Bool draggable; // @synthesize draggable=_draggable;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic, getter=isSelected) _Bool selected; // @synthesize selected=_selected;
@property(nonatomic) struct CATransform3D lastAppliedRotateTransform; // @synthesize lastAppliedRotateTransform=_lastAppliedRotateTransform;
@property(nonatomic) struct CATransform3D lastAppliedScaleTransform; // @synthesize lastAppliedScaleTransform=_lastAppliedScaleTransform;
@property(nonatomic) __weak UILongPressGestureRecognizer *longPressRecognizer; // @synthesize longPressRecognizer=_longPressRecognizer;
@property(nonatomic) __weak MGLMapView *mapView; // @synthesize mapView=_mapView;
@property(nonatomic) __weak UIPanGestureRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer=_panGestureRecognizer;
- (void)prepareForReuse;
@property(retain, nonatomic) NSString *reuseIdentifier; // @synthesize reuseIdentifier=_reuseIdentifier;
@property(nonatomic) _Bool rotatesToMatchCamera; // @synthesize rotatesToMatchCamera=_rotatesToMatchCamera;
@property(nonatomic) _Bool scalesWithViewingDistance; // @synthesize scalesWithViewingDistance=_scalesWithViewingDistance;
- (void)setCenter:(struct CGPoint)arg1;
- (void)setDragState:(unsigned long long)arg1;
- (void)setDragState:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)updateRotateTransform;
- (void)updateScaleTransformForViewingDistance;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

