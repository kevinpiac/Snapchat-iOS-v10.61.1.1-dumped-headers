//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class EGODatabaseStatement, SCGalleryFaceInfoIndexer;
@protocol SCPerforming;

@interface SCGalleryFaceRecognizer : NSObject
{
    id <SCPerforming> _performer;
    SCGalleryFaceInfoIndexer *_faceInfoIndexer;
    struct KnnFaceRecognizer *_faceRecognizer;
    EGODatabaseStatement *_queryAllFaceFeatures;
}

- (void).cxx_destruct;
- (void)_initializeFaceRecognizer;
- (void)_loadModelData:(id)arg1;
- (void)_setupDatabase:(id)arg1;
- (id)initWithFaceInfoIndexer:(id)arg1;
- (id)recognizeFace:(id)arg1;
- (void)trainFaceRecognizer:(id)arg1 featureLabels:(id)arg2 rerun:(_Bool)arg3;

@end

