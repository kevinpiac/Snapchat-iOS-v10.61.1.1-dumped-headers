//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCGrowingButton.h"

@class SCDrawingGestureRecognizer, SCDrawingView, UIColor, UIPinchGestureRecognizer, UIView;
@protocol SCDrawingDelegate;

@interface SCDrawingButton : SCGrowingButton
{
    SCDrawingGestureRecognizer *_drawingGestureRecognizer;
    UIPinchGestureRecognizer *_pinchRecognizer;
    double _lastScale;
    struct CGPoint _previousPoint;
    _Bool _brushIsScaled;
    _Bool _activelyDrawing;
    _Bool _selected;
    _Bool _highlighted;
    id <SCDrawingDelegate> _drawingDelegate;
    UIColor *_color;
    double _scale;
    UIView *_drawingButtonBackground;
    SCGrowingButton *_undoDrawingButton;
    SCDrawingView *_drawingView;
}

- (void).cxx_destruct;
- (void)_drawingPress:(id)arg1;
- (void)_scalePinch:(id)arg1;
- (void)addToView:(id)arg1 withDrawingView:(id)arg2;
@property(readonly, nonatomic) UIColor *color; // @synthesize color=_color;
- (void)didEndDrawingWithStrokeSize:(double)arg1 isResized:(_Bool)arg2;
- (void)didStartDrawing;
@property(retain, nonatomic) UIView *drawingButtonBackground; // @synthesize drawingButtonBackground=_drawingButtonBackground;
@property(nonatomic) __weak id <SCDrawingDelegate> drawingDelegate; // @synthesize drawingDelegate=_drawingDelegate;
- (_Bool)drawingExists;
- (void)drawingPressed;
@property(retain, nonatomic) SCDrawingView *drawingView; // @synthesize drawingView=_drawingView;
- (void)exitDrawingMode;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)getUIImageForImage;
- (long long)historyCount;
- (void)initUndoDrawingButton;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic, getter=isActivelyDrawing) _Bool activelyDrawing; // @synthesize activelyDrawing=_activelyDrawing;
@property(nonatomic, getter=isHighlighted) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(nonatomic, getter=isSelected) _Bool selected; // @synthesize selected=_selected;
@property(readonly, nonatomic) double scale; // @synthesize scale=_scale;
- (void)setColor:(id)arg1;
- (void)setOpacity:(float)arg1;
@property(retain, nonatomic) SCGrowingButton *undoDrawingButton; // @synthesize undoDrawingButton=_undoDrawingButton;
- (void)showControls:(_Bool)arg1;
- (void)stateChanged;
- (void)undoPressed;
- (void)updateColor:(id)arg1;

@end
