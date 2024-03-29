//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "SCChatMediaContentProvider-Protocol.h"

@class EphemeralMedia, NSDictionary, NSString, SCQueuePerformer;
@protocol EphemeralMediaDelegate;

@interface SCMediaSendTaskEphemeralMedia : NSObject <NSCoding, SCChatMediaContentProvider>
{
    SCQueuePerformer *_performer;
    NSString *_persistenceID;
    _Bool _mediaDataLost;
    EphemeralMedia *_ephemeralMedia;
    NSDictionary *_groupIdToMediaIdDownloadUrlMap;
    NSDictionary *_recipientToMediaIdDownloadUrlMap;
    id <EphemeralMediaDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)_loadPersistedFailedEphemeralMediaData;
- (void)_persistMediaData:(id)arg1;
- (id)_persistentStorageKey;
- (void)_removePersistedEphemeralMediaData;
- (id)chatIV;
- (id)chatKey;
- (id)chatMediaID;
- (void)clearPersistedData;
@property(readonly, copy, nonatomic) NSString *clientId;
- (id)creatorAttribution;
@property(nonatomic) __weak id <EphemeralMediaDelegate> delegate; // @synthesize delegate=_delegate;
- (double)duration;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, nonatomic) EphemeralMedia *ephemeralMedia; // @synthesize ephemeralMedia=_ephemeralMedia;
@property(readonly, nonatomic) long long ephemeralMediaState;
- (void)finishDecodingWithPerformer:(id)arg1;
@property(copy, nonatomic) NSDictionary *groupIdToMediaIdDownloadUrlMap; // @synthesize groupIdToMediaIdDownloadUrlMap=_groupIdToMediaIdDownloadUrlMap;
- (double)height;
- (id)initWithCoder:(id)arg1;
- (id)initWithEphemeralMedia:(id)arg1 performer:(id)arg2;
- (_Bool)isInfiniteDuration;
- (_Bool)isValid;
- (_Bool)isZipped;
- (long long)mediaContentType;
- (id)miniThumbnailData;
- (_Bool)needsToBeUploaded;
- (void)persistMediaData;
- (id)persistedEphemeralMediaDatastore;
- (void)prepareDataToUploadForMediaId:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(copy, nonatomic) NSDictionary *recipientToMediaIdDownloadUrlMap; // @synthesize recipientToMediaIdDownloadUrlMap=_recipientToMediaIdDownloadUrlMap;
- (id)snapAttachmentUrl;
- (id)snapMetadata;
@property(readonly, nonatomic) long long type;
- (void)uploadMedia;
- (void)uploadWithCompletion:(CDUnknownBlockType)arg1;
- (id)venueId;
- (double)width;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

