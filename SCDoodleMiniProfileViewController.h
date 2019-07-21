//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCMiniProfileBaseViewController.h"

#import "SCMiniProfileDoodleOptionsSectionControllerDelegate-Protocol.h"
#import "SCShakeToReportDelegate-Protocol.h"

@class NSString, SCMapDoodle;
@protocol SCDoodleMiniProfileViewControllerDelegate, SCImageDownloading, SCMapPeopleFriendsProvider;

@interface SCDoodleMiniProfileViewController : SCMiniProfileBaseViewController <SCMiniProfileDoodleOptionsSectionControllerDelegate, SCShakeToReportDelegate>
{
    NSString *_currentUserId;
    id <SCMapPeopleFriendsProvider> _friendsProvider;
    id <SCImageDownloading> _imageDownloader;
    SCMapDoodle *_displayedDoodle;
    id <SCDoodleMiniProfileViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
- (id)defaultProjectNameV2;
@property(nonatomic) __weak id <SCDoodleMiniProfileViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SCMapDoodle *displayedDoodle; // @synthesize displayedDoodle=_displayedDoodle;
- (void)doodleOptionsSectionController:(id)arg1 didSelectOption:(long long)arg2;
- (id)initWithCurrentUserId:(id)arg1 delegate:(id)arg2 friendsProvider:(id)arg3 imageDownloader:(id)arg4;
- (void)setMapDoodle:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

