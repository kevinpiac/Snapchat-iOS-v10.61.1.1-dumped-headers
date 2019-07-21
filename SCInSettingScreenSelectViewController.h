//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SCBetaShakeReportViewControllerDelegate-Protocol.h"
#import "SCHeaderDelegate-Protocol.h"
#import "SCInSettingScreenEntryDelegate-Protocol.h"

@class NSArray, NSString, SCBetaShakeReportViewController, SCShakeHeaderViewProvider, UILabel;

@interface SCInSettingScreenSelectViewController : UIViewController <SCHeaderDelegate, SCInSettingScreenEntryDelegate, SCBetaShakeReportViewControllerDelegate>
{
    SCShakeHeaderViewProvider *_headerProvider;
    UILabel *_labelView;
    NSArray *_entryProviders;
    SCBetaShakeReportViewController *_reportViewController;
    long long _mode;
}

- (void).cxx_destruct;
- (id)_cameraFeatureNames;
- (_Bool)_cognacEnabled;
- (id)_createStackView:(id)arg1;
- (id)_discoverFeatureNames;
- (id)_friendsFeatureNames;
- (id)_gamesFeatureNames;
- (id)_getLabelText;
- (id)_getTitle;
- (id)_mapFeatureNames;
- (id)_memoriesFeatureNames;
- (id)_profileFeatureNames;
- (id)_searchFeatureNames;
- (id)_settingsFeatureNames;
- (void)_setupHeaderView:(id)arg1 title:(id)arg2;
- (void)_setupLabelView;
- (void)_setupScreenSelectionView:(id)arg1;
- (id)_setupScrollView:(id)arg1;
- (void)didSingleTapEntry:(id)arg1 featureNames:(id)arg2;
- (void)headerleftButtonPressed:(_Bool)arg1 viewController:(id)arg2;
- (void)leftButtonPressed;
@property(nonatomic) long long mode; // @synthesize mode=_mode;
- (void)reportSubmitted:(id)arg1 projectName:(id)arg2 subProjectName:(id)arg3;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
