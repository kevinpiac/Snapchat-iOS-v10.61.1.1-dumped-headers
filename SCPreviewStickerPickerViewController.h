//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SCShakeToReportDelegate-Protocol.h"
#import "SCStickerPickerViewContainer-Protocol.h"
#import "SCVenueFeedbackViewControllerDelegate-Protocol.h"
#import "SCVenueReporter-Protocol.h"

@class NSString, SCPreviewStickerPickerController, SCStickerPickerMenuView, SCUserSession;
@protocol SCPreviewLogging, SCPreviewStickerPickerVenueDataSource;

@interface SCPreviewStickerPickerViewController : UIViewController <SCShakeToReportDelegate, SCVenueReporter, SCVenueFeedbackViewControllerDelegate, SCStickerPickerViewContainer>
{
    SCStickerPickerMenuView *_pickerView;
    id <SCPreviewLogging> _previewLogger;
    _Bool _canRotate;
    id <SCPreviewStickerPickerVenueDataSource> _venueDataSource;
    SCPreviewStickerPickerController *_pickerController;
    SCUserSession *_userSession;
}

- (void).cxx_destruct;
- (id)_initWithViewFrame:(struct CGRect)arg1 isQuickSend:(_Bool)arg2 hideGiphy:(_Bool)arg3 commonLoggingParameters:(id)arg4 userSession:(id)arg5 bottomInset:(double)arg6 stickerPickerLogger:(id)arg7 previewLogger:(id)arg8 menuDelegate:(id)arg9 menuDataSource:(id)arg10 canRotate:(_Bool)arg11 searchEnabled:(_Bool)arg12;
@property(readonly, nonatomic) _Bool canRotate; // @synthesize canRotate=_canRotate;
- (void)close;
- (id)defaultProjectNameV2;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (id)initWithDisabledSearchWithViewFrame:(struct CGRect)arg1 isQuickSend:(_Bool)arg2 hideGiphy:(_Bool)arg3 commonLoggingParameters:(id)arg4 userSession:(id)arg5 bottomInset:(double)arg6 stickerPickerLogger:(id)arg7 previewLogger:(id)arg8 menuDelegate:(id)arg9 menuDataSource:(id)arg10 canRotate:(_Bool)arg11;
- (id)initWithViewFrame:(struct CGRect)arg1 isQuickSend:(_Bool)arg2 hideGiphy:(_Bool)arg3 commonLoggingParameters:(id)arg4 userSession:(id)arg5 bottomInset:(double)arg6 stickerPickerLogger:(id)arg7 previewLogger:(id)arg8 menuDelegate:(id)arg9 menuDataSource:(id)arg10 canRotate:(_Bool)arg11;
@property(readonly, nonatomic) _Bool isOpen;
- (void)openAtCategory:(id)arg1 stickerOffset:(id)arg2;
@property(readonly, nonatomic) SCPreviewStickerPickerController *pickerController; // @synthesize pickerController=_pickerController;
@property(readonly, nonatomic) SCStickerPickerMenuView *pickerView;
- (_Bool)prefersStatusBarHidden;
- (void)reloadDataWithDataSourceUpdateHint:(id)arg1;
- (void)reloadDataWithDataSourceUpdateHint:(id)arg1 shouldRefreshSuperCategoryIcons:(_Bool)arg2;
- (void)reportVenue:(id)arg1;
@property(retain, nonatomic) SCUserSession *userSession; // @synthesize userSession=_userSession;
@property(nonatomic) __weak id <SCPreviewStickerPickerVenueDataSource> venueDataSource; // @synthesize venueDataSource=_venueDataSource;
- (_Bool)shouldDisplayStatusBar;
- (unsigned long long)supportedInterfaceOrientations;
- (void)venueFeedbackViewControllerWantsToDismiss:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

