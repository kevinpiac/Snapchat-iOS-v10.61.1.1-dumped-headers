//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSpectaclesAuxiliaryContentProvider-Protocol.h"

@class NSString, SCSpectaclesAuxiliaryContentLoader, SCUserSession;
@protocol SCPerforming;

@interface SCSpectaclesLabsCVAuxiliaryContentProvider : NSObject <SCSpectaclesAuxiliaryContentProvider>
{
    id <SCPerforming> _performer;
    SCUserSession *_userSession;
    SCSpectaclesAuxiliaryContentLoader *_auxiliaryContentLoader;
}

+ (id)_imuDataRawWithContentsOfFile:(id)arg1;
- (void).cxx_destruct;
- (void)_extractTimestampsFromFile:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_showMessage:(id)arg1;
@property(retain, nonatomic) SCSpectaclesAuxiliaryContentLoader *auxiliaryContentLoader; // @synthesize auxiliaryContentLoader=_auxiliaryContentLoader;
- (void)downloadDepthForSnapId:(id)arg1 outputDepthDirectory:(id)arg2 immediate:(_Bool)arg3 progress:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
- (void)extractDepthFromContentFile:(id)arg1 primaryCamera:(unsigned long long)arg2 calibrationFile:(id)arg3 imuFile:(id)arg4 outputDepthDirectory:(id)arg5 outputAdjustmentFile:(id)arg6 contentType:(unsigned long long)arg7 completion:(CDUnknownBlockType)arg8;
- (void)extractLookupTableFromCalibrationFile:(id)arg1 forContentOfType:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithUserSession:(id)arg1;
- (void)invalidate;
- (void)loadDepthAvailabilityForSnapId:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) id <SCPerforming> performer; // @synthesize performer=_performer;
- (void)requestSkyClassifierWithCompletion:(CDUnknownBlockType)arg1;
@property(nonatomic) __weak SCUserSession *userSession; // @synthesize userSession=_userSession;
- (id)skyClassifierPath;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

