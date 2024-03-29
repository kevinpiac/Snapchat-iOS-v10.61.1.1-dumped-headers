//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString, PHAsset, SCCloudFSFile, SCEncryptedContentManager;
@protocol SCGallerySnap;

@interface SCGallerySendItemSegmentQueueItem : NSObject
{
    SCEncryptedContentManager *_encryptedContentManager;
    SCCloudFSFile *_cloudFile;
    NSMutableArray *_completionBlocks;
    NSArray *_segmentURLs;
    _Bool _didStart;
    PHAsset *_phAsset;
    id <SCGallerySnap> _snap;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool didStart; // @synthesize didStart=_didStart;
- (unsigned long long)hash;
@property(readonly, nonatomic) NSString *identifier;
- (id)initWithVideoAsset:(id)arg1;
- (id)initWithVideoSnap:(id)arg1 encryptedContentManager:(id)arg2 cloudFile:(id)arg3;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) PHAsset *phAsset; // @synthesize phAsset=_phAsset;
- (void)queueCompletionBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) id <SCGallerySnap> snap; // @synthesize snap=_snap;
- (void)startSegmentWithCompletionBlock:(CDUnknownBlockType)arg1;

@end

