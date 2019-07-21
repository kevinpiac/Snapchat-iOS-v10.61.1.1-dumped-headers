//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCPreviewToolBarPickerView.h"

@class SCColorPickerDropletView, SCColorPickerGradientView, SCDrawingPaletteModel, SCExpandedButton, SCShapeView, UIImpactFeedbackGenerator, UILongPressGestureRecognizer;
@protocol SCPalettedColorPickerDropletDelegate, SCPalettedColorPickerViewDelegate;

@interface SCPalettedColorPickerView : SCPreviewToolBarPickerView
{
    SCDrawingPaletteModel *_paletteModel;
    SCExpandedButton *_paletteSwitchButton;
    SCColorPickerDropletView *_dotView;
    _Bool _heightExpanded;
    _Bool _colorLocked;
    id <SCPalettedColorPickerViewDelegate> _delegate;
    id <SCPalettedColorPickerDropletDelegate> _dropletDelegate;
    SCColorPickerDropletView *_dropletView;
    unsigned long long _dropletPosition;
    SCShapeView *_backgroundShapeView;
    SCColorPickerGradientView *_gradientColorView;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    UIImpactFeedbackGenerator *_feedbackGenerator;
    double _heightScale;
    double _dropletOffset;
    double _dropletOriginY;
    double _lockedColorOriginY;
    struct CGPoint _beginPanLocation;
    struct CGSize _previousBoundsSize;
    struct CGPoint _previousDropletCenter;
}

+ (id)createDefaultColorPickerView;
+ (id)createDrawingV2ColorPickerViewWithPaletteType:(unsigned long long)arg1;
- (void).cxx_destruct;
- (_Bool)_canDropletMoveOut;
- (struct CGRect)_containerViewBounds;
- (void)_createPaletteSwitchButton;
- (_Bool)_gradientPickerHitTest:(struct CGPoint)arg1;
- (double)_paletteSwitchButtonHeight;
- (void)_setupViewWithColorPickerVersion:(unsigned long long)arg1 paletteType:(unsigned long long)arg2;
- (void)_togglePaletteModel;
- (void)_updateColorWithLocation:(struct CGPoint)arg1 animateDroplet:(_Bool)arg2;
- (void)_updateDropletWithLocation:(struct CGPoint)arg1;
- (void)_updatePathsForLocation:(struct CGPoint)arg1;
- (void)_updateSwitchViewWithPaletteModel;
- (void)animatePathToDefault;
- (void)animateViews:(long long)arg1;
@property(retain, nonatomic) SCShapeView *backgroundShapeView; // @synthesize backgroundShapeView=_backgroundShapeView;
@property(nonatomic) struct CGPoint beginPanLocation; // @synthesize beginPanLocation=_beginPanLocation;
- (id)colorAtLocation:(struct CGPoint)arg1;
- (double)colorContainerDefaultHeight;
- (double)defaultHeight;
@property(nonatomic) __weak id <SCPalettedColorPickerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <SCPalettedColorPickerDropletDelegate> dropletDelegate; // @synthesize dropletDelegate=_dropletDelegate;
@property(nonatomic) double dropletOffset; // @synthesize dropletOffset=_dropletOffset;
@property(nonatomic) double dropletOriginY; // @synthesize dropletOriginY=_dropletOriginY;
@property(nonatomic) unsigned long long dropletPosition; // @synthesize dropletPosition=_dropletPosition;
@property(retain, nonatomic) SCColorPickerDropletView *dropletView; // @synthesize dropletView=_dropletView;
@property(retain, nonatomic) UIImpactFeedbackGenerator *feedbackGenerator; // @synthesize feedbackGenerator=_feedbackGenerator;
@property(retain, nonatomic) SCColorPickerGradientView *gradientColorView; // @synthesize gradientColorView=_gradientColorView;
@property(nonatomic) double heightScale; // @synthesize heightScale=_heightScale;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithColorPickerVersion:(unsigned long long)arg1 paletteType:(unsigned long long)arg2;
@property(nonatomic, getter=isColorLocked) _Bool colorLocked; // @synthesize colorLocked=_colorLocked;
@property(nonatomic, getter=isHeightExpanded) _Bool heightExpanded; // @synthesize heightExpanded=_heightExpanded;
- (void)layoutSubviews;
- (struct CGPoint)locationForColor:(id)arg1;
@property(nonatomic) double lockedColorOriginY; // @synthesize lockedColorOriginY=_lockedColorOriginY;
- (void)longPress:(id)arg1;
@property(retain, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer; // @synthesize longPressGestureRecognizer=_longPressGestureRecognizer;
- (id)moveDropletToCenter;
- (void)moveDropletToColor:(id)arg1;
- (void)onPostAnimateForViews:(long long)arg1;
- (void)onPreAnimateForViews:(long long)arg1;
@property(readonly, nonatomic) SCDrawingPaletteModel *paletteModel; // @synthesize paletteModel=_paletteModel;
- (double)pathCurveForLocation:(struct CGPoint)arg1;
- (id)pathForLocation:(struct CGPoint)arg1;
@property(nonatomic) struct CGSize previousBoundsSize; // @synthesize previousBoundsSize=_previousBoundsSize;
@property(nonatomic) struct CGPoint previousDropletCenter; // @synthesize previousDropletCenter=_previousDropletCenter;
- (void)setCompactButtonIcon:(id)arg1;
- (void)setDropletOriginY:(double)arg1 offsetX:(double)arg2;
- (void)setHeightExpanded:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)shouldExpandHeightWithGesture:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

