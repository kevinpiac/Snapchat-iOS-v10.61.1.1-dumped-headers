//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class SCGallerySharedFolderCell, SCGallerySharedFolderViewModel, UILongPressGestureRecognizer, UIView;

@protocol SCGallerySharedFolderCellDelegate
- (void)sharedFolderCellDidLongPressItem:(SCGallerySharedFolderCell *)arg1 index:(long long)arg2 viewModel:(SCGallerySharedFolderViewModel *)arg3 fromView:(UIView *)arg4 longPress:(UILongPressGestureRecognizer *)arg5;
- (void)sharedFolderCellDidTapAvatarForCell:(SCGallerySharedFolderCell *)arg1;
- (void)sharedFolderCellDidTapItem:(SCGallerySharedFolderCell *)arg1 index:(long long)arg2 viewModel:(SCGallerySharedFolderViewModel *)arg3 fromView:(UIView *)arg4;
@end

