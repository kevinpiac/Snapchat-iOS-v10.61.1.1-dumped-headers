//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCChunkItem.h"

#import "MediaDataSource-Protocol.h"

@class Media, NSData, NSString, NSURL, NSValue, SCChunkInteractionZone;

@interface SCChunkTopSnapItem : SCChunkItem <MediaDataSource>
{
    NSData *_imageDataToSave;
    NSData *_firstFrameDataToSave;
    _Bool _videoRotationEnabled;
    _Bool _isVideoFirstFrameOptional;
    _Bool _overlayPresent;
    _Bool _sponsoredOverlayPresent;
    Media *_backgroundImageMedia;
    Media *_backgroundVideoFirstFrameMedia;
    unsigned long long _backgroundType;
    unsigned long long _docking;
    unsigned long long _topSnapVideoMode;
    NSURL *_backgroundVideoRemoteURL;
    NSValue *_videoSize;
    SCChunkInteractionZone *_interactionZone;
    NSString *_backgroundVideoFilename;
    NSString *_chunkHash;
}

+ (unsigned long long)backgroundTypeForString:(id)arg1;
+ (unsigned long long)modeForString:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) Media *backgroundImageMedia; // @synthesize backgroundImageMedia=_backgroundImageMedia;
@property(nonatomic) unsigned long long backgroundType; // @synthesize backgroundType=_backgroundType;
@property(copy, nonatomic) NSString *backgroundVideoFilename; // @synthesize backgroundVideoFilename=_backgroundVideoFilename;
@property(retain, nonatomic) Media *backgroundVideoFirstFrameMedia; // @synthesize backgroundVideoFirstFrameMedia=_backgroundVideoFirstFrameMedia;
- (id)backgroundVideoLocalURL;
@property(readonly, nonatomic) NSURL *backgroundVideoRemoteURL; // @synthesize backgroundVideoRemoteURL=_backgroundVideoRemoteURL;
- (id)cacheMediaIds;
@property(copy, nonatomic) NSString *chunkHash; // @synthesize chunkHash=_chunkHash;
- (id)decryptData:(id)arg1 forMedia:(id)arg2;
- (void)didDecodeObject;
@property(nonatomic) unsigned long long docking; // @synthesize docking=_docking;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)encrypt;
- (id)encryptionDictionaryForMedia:(id)arg1;
- (void)ensureNonNilMediaObjects;
- (_Bool)imageMediaExistsInCache;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 chunkDictionary:(id)arg2;
@property(readonly, copy, nonatomic) SCChunkInteractionZone *interactionZone; // @synthesize interactionZone=_interactionZone;
@property(nonatomic) _Bool isVideoFirstFrameOptional; // @synthesize isVideoFirstFrameOptional=_isVideoFirstFrameOptional;
- (id)mediaIdForMedia:(id)arg1;
- (_Bool)needsAuthToFetch;
@property(nonatomic) _Bool overlayPresent; // @synthesize overlayPresent=_overlayPresent;
- (_Bool)persist;
- (id)requestContexts;
- (void)saveMediaToCache;
@property(nonatomic) _Bool sponsoredOverlayPresent; // @synthesize sponsoredOverlayPresent=_sponsoredOverlayPresent;
@property(nonatomic) unsigned long long topSnapVideoMode; // @synthesize topSnapVideoMode=_topSnapVideoMode;
@property(copy, nonatomic) NSValue *videoSize; // @synthesize videoSize=_videoSize;
@property(readonly, nonatomic) _Bool videoRotationEnabled; // @synthesize videoRotationEnabled=_videoRotationEnabled;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
