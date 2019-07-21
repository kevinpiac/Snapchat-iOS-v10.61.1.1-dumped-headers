//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCChatSingleMediaThumbnailViewModel-Protocol.h"

@class FLAnimatedImage, NSString, SCUserSession, UIImage;

@interface SCBaseMediaThumbnailViewModel : NSObject <SCChatSingleMediaThumbnailViewModel>
{
    _Bool _alphaSetForDisplay;
    _Bool _isFailed;
    _Bool _isSentByUser;
    _Bool _isSaved;
    _Bool _isCustomSticker;
    _Bool _isSnap3D;
    UIImage *_miniThumbnailImage;
    NSString *_messageId;
    NSString *_conversationId;
    NSString *_senderUsername;
    long long _bodyType;
    SCUserSession *_userSession;
    NSString *_attachedURL;
    UIImage *_image;
    UIImage *_customStickerImage;
    FLAnimatedImage *_gif;
    UIImage *_videoOverlayThumbnailImage;
    struct CGSize _thumbnailSize;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool alphaSetForDisplay; // @synthesize alphaSetForDisplay=_alphaSetForDisplay;
@property(copy, nonatomic) NSString *attachedURL; // @synthesize attachedURL=_attachedURL;
- (id)audioStitch;
@property(nonatomic) long long bodyType; // @synthesize bodyType=_bodyType;
- (void)clearOldData;
- (_Bool)containsGif;
- (_Bool)containsVideo;
@property(copy, nonatomic) NSString *conversationId; // @synthesize conversationId=_conversationId;
@property(retain, nonatomic) UIImage *customStickerImage; // @synthesize customStickerImage=_customStickerImage;
@property(readonly, copy) NSString *description;
- (id)displayedMedia;
- (void)fetchCustomStickerImageToDisplayWithCompletionHandler:(CDUnknownBlockType)arg1 cellSize:(struct CGSize)arg2;
- (void)fetchGifToDisplayWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)fetchImageToDisplayWithCompletionHandler:(CDUnknownBlockType)arg1 scaledToSize:(struct CGSize)arg2;
- (void)fetchOriginalImageToDisplayWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)fetchVideoOverlayThumbnailWithSize:(struct CGSize)arg1 WithCompletionHandler:(CDUnknownBlockType)arg2;
- (void)fetchVideoOverlayWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) FLAnimatedImage *gif; // @synthesize gif=_gif;
- (id)gifToDisplay;
- (double)height;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (id)imageToDisplay;
- (_Bool)isCircular;
@property(nonatomic) _Bool isCustomSticker; // @synthesize isCustomSticker=_isCustomSticker;
- (_Bool)isEqual:(id)arg1;
@property(nonatomic) _Bool isFailed; // @synthesize isFailed=_isFailed;
@property(nonatomic) _Bool isSaved; // @synthesize isSaved=_isSaved;
@property(nonatomic) _Bool isSentByUser; // @synthesize isSentByUser=_isSentByUser;
@property(nonatomic) _Bool isSnap3D; // @synthesize isSnap3D=_isSnap3D;
- (void)loadMedia;
- (void)loadMediaUserInitiated;
- (void)mediaFailedToLoadFromCache;
- (id)mediaIdentifier;
- (_Bool)mediaLoaded;
- (_Bool)mediaSaved;
- (long long)mediaType;
@property(copy, nonatomic) NSString *messageId; // @synthesize messageId=_messageId;
@property(copy, nonatomic) UIImage *miniThumbnailImage; // @synthesize miniThumbnailImage=_miniThumbnailImage;
- (_Bool)readyForDisplay;
- (_Bool)representsMedia:(id)arg1;
@property(copy, nonatomic) NSString *senderUsername; // @synthesize senderUsername=_senderUsername;
@property(nonatomic) struct CGSize thumbnailSize; // @synthesize thumbnailSize=_thumbnailSize;
@property(nonatomic) __weak SCUserSession *userSession; // @synthesize userSession=_userSession;
@property(retain) UIImage *videoOverlayThumbnailImage; // @synthesize videoOverlayThumbnailImage=_videoOverlayThumbnailImage;
- (_Bool)shouldCropCircularMedia;
- (_Bool)shouldDisplayActivityIndicator;
- (_Bool)shouldDisplayFailedToLoad;
- (_Bool)shouldDisplayFailedToSend;
- (_Bool)shouldDisplaySendingOverlay;
- (_Bool)shouldDisplayTapToLoad;
- (_Bool)shouldShowFullScreenView;
- (id)trackingId;
- (_Bool)useDisplayedMediaDirectly;
- (id)videoOverlayThumbnailImageToDisplay;
- (id)videoURL;
- (double)width;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

