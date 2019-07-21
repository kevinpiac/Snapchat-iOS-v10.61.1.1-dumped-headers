//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSSet, SCGallerySelectionSnap, UILongPressGestureRecognizer, UIView, UIViewController;
@protocol SCGalleryItem, SCGalleryTabController;

@protocol SCGalleryTabControllerDelegate <NSObject>
- (void)cameraRollTabControllerRequestsUpdateDisplay:(id <SCGalleryTabController>)arg1;
- (CDStruct_bac8f6e9)mediaScenePathForTabController:(id <SCGalleryTabController>)arg1 withMediaScenePathComponent:(unsigned long long)arg2;
- (void)tabController:(id <SCGalleryTabController>)arg1 browseSelected:(long long)arg2 items:(NSArray *)arg3 fromView:(UIView *)arg4;
- (void)tabController:(id <SCGalleryTabController>)arg1 didChangeDisplayedContent:(unsigned long long)arg2;
- (void)tabController:(id <SCGalleryTabController>)arg1 didChangeSelected:(_Bool)arg2 forGalleryItem:(id <SCGalleryItem>)arg3;
- (void)tabController:(id <SCGalleryTabController>)arg1 didChangeSelected:(_Bool)arg2 forGallerySnapItem:(SCGallerySelectionSnap *)arg3;
- (void)tabController:(id <SCGalleryTabController>)arg1 didChangeSelected:(_Bool)arg2 forItems:(NSSet *)arg3 snapItems:(NSSet *)arg4;
- (void)tabController:(id <SCGalleryTabController>)arg1 didSaveFeaturedStory:(id <SCGalleryItem>)arg2;
- (void)tabController:(id <SCGalleryTabController>)arg1 editSelected:(long long)arg2 items:(NSArray *)arg3 fromView:(UIView *)arg4 longPress:(UILongPressGestureRecognizer *)arg5;
- (void)tabController:(id <SCGalleryTabController>)arg1 presentActionMenu:(long long)arg2 items:(NSArray *)arg3 fromView:(UIView *)arg4;
- (void)tabController:(id <SCGalleryTabController>)arg1 requestsSelectMode:(_Bool)arg2;
- (_Bool)tabControllerCollectionViewIsFullyVisible:(id <SCGalleryTabController>)arg1;
- (void)tabControllerDidBeginEditing:(id <SCGalleryTabController>)arg1;
- (void)tabControllerDidChangeScrollContentOffset:(id <SCGalleryTabController>)arg1;
- (void)tabControllerDidDismissOpera:(id <SCGalleryTabController>)arg1;
- (void)tabControllerDidEndDecelerating:(id <SCGalleryTabController>)arg1;
- (void)tabControllerDidEndDragging:(id <SCGalleryTabController>)arg1 willDecelerate:(_Bool)arg2;
- (void)tabControllerDidEndEditing:(id <SCGalleryTabController>)arg1;
- (void)tabControllerDidPresentOpera:(id <SCGalleryTabController>)arg1;
- (void)tabControllerDidPressLagunaImportButton:(id <SCGalleryTabController>)arg1;
- (double)tabControllerTopInset:(id <SCGalleryTabController>)arg1;
- (UIViewController *)tabControllerViewControllerToPresentFrom;
- (void)tabControllerWillBeginDragging:(id <SCGalleryTabController>)arg1;
@end
