//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCGalleryPreviewController, SCUserSession;

@interface SCLagunaAppNotificationHandler : NSObject
{
    SCUserSession *_userSession;
    SCGalleryPreviewController *_previewController;
}

- (void).cxx_destruct;
- (id)initWithUserSession:(id)arg1;
- (void)presentPreviewForSnapId:(id)arg1 fromViewController:(id)arg2;
@property(retain, nonatomic) SCGalleryPreviewController *previewController; // @synthesize previewController=_previewController;
- (void)pushManageSpecsOntoViewController:(id)arg1;
- (void)pushSpecsSettingsOntoViewController:(id)arg1;
@property(retain, nonatomic) SCUserSession *userSession; // @synthesize userSession=_userSession;
- (void)startHdFlowIfNecessaryWithContent:(id)arg1;

@end

