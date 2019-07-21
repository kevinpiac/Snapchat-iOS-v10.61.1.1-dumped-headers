//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCGalleryBaseStoryCell, SCGalleryBaseStorySnapCell, SCGalleryStoryViewModel, UILongPressGestureRecognizer, UITextField, UIView;
@protocol SCGallerySnap;

@protocol SCGalleryStoryCellDelegate <NSObject>
- (void)storyCell:(SCGalleryBaseStoryCell *)arg1 didBeginEditing:(UITextField *)arg2;
- (void)storyCell:(SCGalleryBaseStoryCell *)arg1 didLongPress:(UILongPressGestureRecognizer *)arg2 snap:(id <SCGallerySnap>)arg3 viewModel:(SCGalleryStoryViewModel *)arg4 fromView:(UIView *)arg5;
- (void)storyCell:(SCGalleryBaseStoryCell *)arg1 didSelectSnap:(id <SCGallerySnap>)arg2 viewModel:(SCGalleryStoryViewModel *)arg3 snapCell:(SCGalleryBaseStorySnapCell *)arg4 fromView:(UIView *)arg5;
- (void)storyCell:(SCGalleryBaseStoryCell *)arg1 didTapActionButton:(SCGalleryStoryViewModel *)arg2;
- (void)storyCell:(SCGalleryBaseStoryCell *)arg1 didTapShowAll:(SCGalleryStoryViewModel *)arg2 reload:(_Bool)arg3;
- (void)storyCell:(SCGalleryBaseStoryCell *)arg1 didTapStory:(SCGalleryStoryViewModel *)arg2;
- (void)storyCell:(SCGalleryBaseStoryCell *)arg1 expandCell:(SCGalleryStoryViewModel *)arg2;
- (void)storyCell:(SCGalleryBaseStoryCell *)arg1 handleLongPress:(UILongPressGestureRecognizer *)arg2 viewModel:(SCGalleryStoryViewModel *)arg3;
- (_Bool)storyCellIsCollectionViewFullyVisible:(SCGalleryBaseStoryCell *)arg1;
- (_Bool)storyCellIsTabFocused:(SCGalleryBaseStoryCell *)arg1;
@end
