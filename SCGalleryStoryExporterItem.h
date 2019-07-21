//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCStoryExporterItem-Protocol.h"

@class NSString, SCCloudFSFile, SCGallerySnap, SCUserSession;

@interface SCGalleryStoryExporterItem : NSObject <SCStoryExporterItem>
{
    SCGallerySnap *_snap;
    SCCloudFSFile *_cloudFile;
    SCUserSession *_userSession;
    CDStruct_bac8f6e9 _mediaScenePath;
}

- (void).cxx_destruct;
- (struct CGSize)_getVideoTargetSize:(id)arg1;
- (id)_prepareImage:(id)arg1 spectaclesExportSettings:(id)arg2;
- (void)_setVideoFilterPropertiesForSpectacles:(id)arg1 spectaclesExportSettings:(id)arg2;
@property(readonly, nonatomic) SCCloudFSFile *cloudFile; // @synthesize cloudFile=_cloudFile;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)createTimeUtc;
- (void)exportToVideoURLCompletion:(CDUnknownBlockType)arg1 progressBlock:(CDUnknownBlockType)arg2 spectaclesExportSettings:(id)arg3;
- (id)initWithSnap:(id)arg1 cloudFile:(id)arg2 mediaScenePath:(CDStruct_bac8f6e9)arg3 userSession:(id)arg4;
- (_Bool)isLagunaMedia;
- (_Bool)isSpectacles60fps;
- (_Bool)isSpectaclesImage;
- (_Bool)isSpectaclesMedia;
@property(readonly, nonatomic) CDStruct_bac8f6e9 mediaScenePath; // @synthesize mediaScenePath=_mediaScenePath;
@property(readonly, nonatomic) SCGallerySnap *snap; // @synthesize snap=_snap;
- (struct CGRect)spectaclesExportSize;
- (struct CGSize)spectaclesExportTargetSizeForExportFormat:(long long)arg1;
- (double)time;
@property(readonly, nonatomic) SCUserSession *userSession; // @synthesize userSession=_userSession;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
