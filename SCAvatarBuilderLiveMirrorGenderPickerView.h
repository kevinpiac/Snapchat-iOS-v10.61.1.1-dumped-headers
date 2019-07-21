//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class SCAvatarBuilderGenderView, UILabel;
@protocol SCAvatarBuilderLiveMirrorGenderPickerViewDelegate;

@interface SCAvatarBuilderLiveMirrorGenderPickerView : UIView
{
    UIView *_buttonContainer;
    UILabel *_getStartedLabel;
    SCAvatarBuilderGenderView *_feminineAvatarView;
    SCAvatarBuilderGenderView *_masculineAvatarView;
    id <SCAvatarBuilderLiveMirrorGenderPickerViewDelegate> _delegate;
}

- (void).cxx_destruct;
- (id)_addAvatarGenderViewWithGender:(unsigned long long)arg1 toView:(id)arg2;
- (void)_femaleSelected;
- (void)_maleSelected;
- (void)animateInGenderViews;
@property(nonatomic) __weak id <SCAvatarBuilderLiveMirrorGenderPickerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)hasGenderAssets;
- (id)initWithFrame:(struct CGRect)arg1 downloadableContentManager:(id)arg2;
- (void)setAvatarImage:(id)arg1 forGender:(unsigned long long)arg2;
- (void)transitionToShowGenderPicker:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;

@end

