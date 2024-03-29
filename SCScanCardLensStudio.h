//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCScanCardTableViewCell.h"

@class SCLensStudioPairManager, SCScanCardButton, SCSnapScannedData, UILabel, UIView;

@interface SCScanCardLensStudio : SCScanCardTableViewCell
{
    SCSnapScannedData *_scanData;
    SCLensStudioPairManager *_lensStudioPairManager;
    _Bool _isPairingStudio;
    SCScanCardButton *_pairButton;
    SCScanCardButton *_cancelButton;
    UILabel *_titleLabel;
    UIView *_headerBackgroundView;
    CDUnknownBlockType _errorHandler;
}

- (void).cxx_destruct;
- (void)_dismiss;
- (_Bool)_errorHandler:(id)arg1;
- (void)_pair;
@property(copy, nonatomic) CDUnknownBlockType errorHandler; // @synthesize errorHandler=_errorHandler;
- (id)initWithData:(id)arg1 lensStudioPairManager:(id)arg2;
- (void)transitionToContentAnimated:(_Bool)arg1;
- (void)updateStyle;

@end

