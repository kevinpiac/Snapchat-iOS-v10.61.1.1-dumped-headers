//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SCLagunaExportImagesCollectionViewDelegate-Protocol.h"
#import "SCLagunaExportLabelsCollectionViewDelegate-Protocol.h"
#import "SCSpectaclesCustomExporting-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSArray, NSNumber, NSString, SCGalleryLagunaExportImageCollectionView, SCGalleryLagunaExportLabelCollectionView, UIButton, UIImage, UILabel, UIView;
@protocol SCGalleryLagunaCustomExportViewControllerDelegate;

@interface SCGalleryLagunaCustomExportViewController : UIViewController <SCSpectaclesCustomExporting, SCLagunaExportImagesCollectionViewDelegate, SCLagunaExportLabelsCollectionViewDelegate, UIGestureRecognizerDelegate>
{
    id <SCGalleryLagunaCustomExportViewControllerDelegate> _delegate;
    UIViewController *_fromViewController;
    NSArray *_providers;
    UIImage *_thumbnail;
    NSArray *_snaps;
    CDUnknownBlockType _completion;
    NSNumber *_defaultExportType;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIView *_imagesContainer;
    SCGalleryLagunaExportImageCollectionView *_imagesCollectionView;
    UIView *_textContainer;
    SCGalleryLagunaExportLabelCollectionView *_textCollectionView;
    UIButton *_cancelButton;
    UIButton *_exportButton;
    UIButton *_shareButton;
    struct CGPoint _panLabelsOffset;
}

- (void).cxx_destruct;
- (void)_cancelButtonPressed;
- (void)_initCancelButton;
- (void)_initExportButtonWithExportFormat:(long long)arg1;
- (void)_initShareButton;
- (void)_setupLabelPosition;
- (void)_shareButtonPressed:(id)arg1;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) NSNumber *defaultExportType; // @synthesize defaultExportType=_defaultExportType;
@property(nonatomic) __weak id <SCGalleryLagunaCustomExportViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dismissFromView;
@property(retain, nonatomic) UIButton *exportButton; // @synthesize exportButton=_exportButton;
- (void)exportImagesCollectionView:(id)arg1 imageDidEndScroll:(id)arg2;
- (void)exportImagesCollectionView:(id)arg1 imageDidScroll:(double)arg2;
@property(nonatomic) __weak UIViewController *fromViewController; // @synthesize fromViewController=_fromViewController;
- (void)handlePanGesture:(id)arg1;
@property(retain, nonatomic) SCGalleryLagunaExportImageCollectionView *imagesCollectionView; // @synthesize imagesCollectionView=_imagesCollectionView;
@property(retain, nonatomic) UIView *imagesContainer; // @synthesize imagesContainer=_imagesContainer;
- (id)initWithDelegate:(id)arg1 defaultExportType:(id)arg2 fromViewController:(id)arg3 providers:(id)arg4 thumbnail:(id)arg5 snaps:(id)arg6 completion:(CDUnknownBlockType)arg7;
- (void)labelDidSelect:(id)arg1;
@property(nonatomic) struct CGPoint panLabelsOffset; // @synthesize panLabelsOffset=_panLabelsOffset;
- (void)presentInView:(id)arg1;
@property(retain, nonatomic) NSArray *providers; // @synthesize providers=_providers;
@property(retain, nonatomic) UIButton *shareButton; // @synthesize shareButton=_shareButton;
@property(retain, nonatomic) NSArray *snaps; // @synthesize snaps=_snaps;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) SCGalleryLagunaExportLabelCollectionView *textCollectionView; // @synthesize textCollectionView=_textCollectionView;
@property(retain, nonatomic) UIView *textContainer; // @synthesize textContainer=_textContainer;
@property(retain, nonatomic) UIImage *thumbnail; // @synthesize thumbnail=_thumbnail;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

