//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCChatMediaContentProvider-Protocol.h"
#import "SCMediaDrawerItem-Protocol.h"

@class NSDate, NSMutableArray, NSString, PHAsset;

@interface SCChatMediaDrawerBaseMedia : NSObject <SCMediaDrawerItem, SCChatMediaContentProvider>
{
    PHAsset *_phAsset;
    NSMutableArray *_phImageRequestIds;
    NSString *_chatKey;
    NSString *_chatIV;
    double _aspectRatio;
    long long _orientation;
    NSDate *_creationDate;
    NSString *_uuid;
    long long _mediaType;
    unsigned long long _sourceDrawerPosition;
    struct CGSize _originalSize;
    struct CGSize _originalResolution;
    struct CGSize _croppedSize;
    struct CGSize _displaySize;
    struct CGSize _smallThumbnailSizeInSendBar;
}

- (void).cxx_destruct;
- (void)_cropImageIfNecessary;
@property(readonly, nonatomic) double aspectRatio; // @synthesize aspectRatio=_aspectRatio;
- (void)cancelThumbnailFetchRequest;
- (id)chatIV;
- (id)chatKey;
- (id)chatMediaID;
@property(readonly, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
- (id)creatorAttribution;
@property(readonly, nonatomic) struct CGSize croppedSize; // @synthesize croppedSize=_croppedSize;
@property(nonatomic) struct CGSize displaySize; // @synthesize displaySize=_displaySize;
- (double)duration;
- (void)fetchImageWithSize:(struct CGSize)arg1 thumbnailType:(long long)arg2 allowLowQuality:(_Bool)arg3 userSession:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)fetchOriginalImageWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchOriginalImageWithUserSession:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchSmallThumbnailImageInSenderBarWithCompletion:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchThumbnailImageWithCompletion:(_Bool)arg1 userSession:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)groupIdToMediaIdDownloadUrlMap;
- (double)height;
- (id)init;
- (id)initWithPHAsset:(id)arg1;
- (_Bool)isInfiniteDuration;
- (_Bool)isZipped;
- (id)itemId;
- (long long)itemType;
- (struct CGSize)maxSizeOnScreen;
- (long long)mediaContentType;
- (id)mediaIdentifier;
@property(nonatomic) long long mediaType; // @synthesize mediaType=_mediaType;
- (id)miniThumbnailData;
- (_Bool)needsToBeUploaded;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(readonly, nonatomic) struct CGSize originalResolution; // @synthesize originalResolution=_originalResolution;
@property(readonly, nonatomic) struct CGSize originalSize; // @synthesize originalSize=_originalSize;
@property(readonly, copy, nonatomic) PHAsset *phAsset; // @synthesize phAsset=_phAsset;
- (void)prepareDataToUploadForMediaId:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)prepareUploadDataForMediaId:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(nonatomic) struct CGSize smallThumbnailSizeInSendBar; // @synthesize smallThumbnailSizeInSendBar=_smallThumbnailSizeInSendBar;
@property(nonatomic) unsigned long long sourceDrawerPosition; // @synthesize sourceDrawerPosition=_sourceDrawerPosition;
- (id)snapAttachmentUrl;
- (id)snapMetadata;
- (void)updatePropertiesWithURLAsset:(id)arg1;
- (void)uploadWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly, copy, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
- (id)venueId;
- (double)width;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

