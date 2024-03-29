//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"
#import "SCPreviewExporterDisplayDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class EphemeralMedia, NSArray, NSString, SCPreviewBlob, SCPreviewExporter, SCSendToConfirmationViewModel, SCSnapCommonLoggingParameters;
@protocol SCSendPreviewViewModel;

@protocol SCSendToScreen <NSObject, UITextFieldDelegate, UIAlertViewDelegate, SCPreviewExporterDisplayDelegate>
+ (NSString *)pageViewName;
- (void)dismiss;
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(void (^)(void))arg2;
@property(nonatomic) double lastExitTime;
- (void)logStoriesSelectionWithLoggingParameters:(SCSnapCommonLoggingParameters *)arg1;
@property(copy, nonatomic) NSString *pageType;
@property(nonatomic) __weak SCPreviewExporter *previewExporter;
@property(retain, nonatomic) id <SCSendPreviewViewModel> previewViewModel;
- (void)removeLoadingOverlay;
- (SCSendToConfirmationViewModel *)selectionResult;
- (void)sendGroupPressed;
@property(nonatomic) _Bool userDidPressSend;
- (void)showLoadingOverlay;
- (void)updateRecipientsFromSaveSendWithModels:(NSArray *)arg1;

@optional
- (void)setPreviewBlob:(SCPreviewBlob *)arg1;
- (void)updateStoryThumbnailForEphemeralMedia:(EphemeralMedia *)arg1;
@end

