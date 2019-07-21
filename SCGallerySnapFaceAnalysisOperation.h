//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAsynchronousOperation.h"

@class NSArray, NSDate, NSError, SCGalleryVisualSearchIndexer, SCQueuePerformer, SCUserSession;
@protocol SCCanceling, SCGallerySnap;

@interface SCGallerySnapFaceAnalysisOperation : SCAsynchronousOperation
{
    SCGalleryVisualSearchIndexer *_visualSearchIndexer;
    NSDate *_startDate;
    NSDate *_downloadEndDate;
    NSDate *_analyzeStartDate;
    NSDate *_analyzeEndDate;
    int _gallerySnapMediaType;
    NSArray *_results;
    NSError *_error;
    id <SCGallerySnap> _gallerySnap;
    SCUserSession *_userSession;
    SCQueuePerformer *_performer;
    id <SCCanceling> _downloadRequest;
}

- (void).cxx_destruct;
- (void)_analyzeGallerySnap:(id)arg1 withcloudFile:(id)arg2;
- (void)_fetchMediaForGallerySnap:(id)arg1;
- (void)cancel;
@property(retain, nonatomic) id <SCCanceling> downloadRequest; // @synthesize downloadRequest=_downloadRequest;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) id <SCGallerySnap> gallerySnap; // @synthesize gallerySnap=_gallerySnap;
- (id)initWithGallerySnap:(id)arg1 userSession:(id)arg2;
@property(retain, nonatomic) SCQueuePerformer *performer; // @synthesize performer=_performer;
@property(retain, nonatomic) NSArray *results; // @synthesize results=_results;
@property(retain, nonatomic) SCUserSession *userSession; // @synthesize userSession=_userSession;
- (void)start;
- (id)timeTaken;

@end
