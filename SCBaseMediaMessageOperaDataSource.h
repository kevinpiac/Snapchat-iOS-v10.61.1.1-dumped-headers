//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SCOperaViewModel;
@protocol SCOperaGifProvider><SCOperaImageProvider;

@interface SCBaseMediaMessageOperaDataSource : NSObject
{
    _Bool _isGroupConversation;
    _Bool _shouldEnableZoom;
    _Bool _containsMultipleMedias;
    _Bool _needToAnimationBaseThumbnailViewWhenClosing;
    NSString *_conversationId;
    long long _messageType;
    id <SCOperaGifProvider><SCOperaImageProvider> _imageProvider;
    SCOperaViewModel *_rootViewModel;
    NSString *_stackId;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool containsMultipleMedias; // @synthesize containsMultipleMedias=_containsMultipleMedias;
@property(readonly, copy, nonatomic) NSString *conversationId; // @synthesize conversationId=_conversationId;
@property(readonly, nonatomic) id <SCOperaGifProvider><SCOperaImageProvider> imageProvider; // @synthesize imageProvider=_imageProvider;
- (id)init;
- (id)initWithMessage:(id)arg1 messageMetadata:(id)arg2;
@property(readonly, nonatomic) _Bool isGroupConversation; // @synthesize isGroupConversation=_isGroupConversation;
- (id)messageIdForPage:(id)arg1;
@property(readonly, nonatomic) long long messageType; // @synthesize messageType=_messageType;
@property(readonly, nonatomic) _Bool needToAnimationBaseThumbnailViewWhenClosing; // @synthesize needToAnimationBaseThumbnailViewWhenClosing=_needToAnimationBaseThumbnailViewWhenClosing;
- (void)prefetchMediasInsideBatchedMediaMessageAfterMediaId:(id)arg1;
- (void)prepareMediaForPresentation:(id)arg1;
@property(readonly, nonatomic) _Bool presentingMessage;
@property(retain, nonatomic) SCOperaViewModel *rootViewModel; // @synthesize rootViewModel=_rootViewModel;
- (void)setRootIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) _Bool shouldEnableZoom; // @synthesize shouldEnableZoom=_shouldEnableZoom;
@property(readonly, nonatomic) NSString *stackId; // @synthesize stackId=_stackId;
- (void)updateViewModelForMedia:(id)arg1 mediaMetadata:(id)arg2;
- (id)viewModelForPageId:(id)arg1;

@end

