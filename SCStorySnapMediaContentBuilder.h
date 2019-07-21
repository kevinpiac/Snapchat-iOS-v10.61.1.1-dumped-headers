//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSDate, NSNumber, NSString, SOJUAudioStitch;

@interface SCStorySnapMediaContentBuilder : NSObject
{
    NSString *_storySnapId;
    NSDate *_storyTimestamp;
    NSDate *_storyExpirationDate;
    long long _mediaType;
    NSString *_mediaId;
    NSString *_mediaKey;
    NSString *_mediaIv;
    NSString *_storyCacheMediaId;
    NSString *_captionText;
    NSString *_attachmentUrl;
    NSString *_venueId;
    NSNumber *_captionScreenPosition;
    NSNumber *_captionOrientation;
    _Bool _overlayPresent;
    _Bool _operaShouldUseFraming;
    NSString *_operaDisplayName;
    NSString *_operaDisplaySubTitle;
    NSData *_contextHint;
    SOJUAudioStitch *_audioStitch;
    long long _loadState;
}

+ (id)withStorySnapMediaContent:(id)arg1;
- (void).cxx_destruct;
- (id)build;
- (id)setAttachmentUrl:(id)arg1;
- (id)setAudioStitch:(id)arg1;
- (id)setCaptionOrientation:(id)arg1;
- (id)setCaptionScreenPosition:(id)arg1;
- (id)setCaptionText:(id)arg1;
- (id)setContextHint:(id)arg1;
- (id)setLoadState:(long long)arg1;
- (id)setMediaId:(id)arg1;
- (id)setMediaIv:(id)arg1;
- (id)setMediaKey:(id)arg1;
- (id)setMediaType:(long long)arg1;
- (id)setOperaDisplayName:(id)arg1;
- (id)setOperaDisplaySubTitle:(id)arg1;
- (id)setOperaShouldUseFraming:(_Bool)arg1;
- (id)setOverlayPresent:(_Bool)arg1;
- (id)setStoryCacheMediaId:(id)arg1;
- (id)setStoryExpirationDate:(id)arg1;
- (id)setStorySnapId:(id)arg1;
- (id)setStoryTimestamp:(id)arg1;
- (id)setVenueId:(id)arg1;

@end

