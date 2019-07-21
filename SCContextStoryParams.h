//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CLLocation, NSString, SCContextContextHint;

@interface SCContextStoryParams : NSObject
{
    _Bool _replyEnabled;
    _Bool _isShareable;
    _Bool _hasFilter;
    int _launchSource;
    NSString *_clientId;
    NSString *_storyId;
    NSString *_contentUsername;
    SCContextContextHint *_contextHint;
    NSString *_singleRecipientDisplayName;
    NSString *_groupRecipientConversationId;
    long long _lensId;
    long long _filterId;
    NSString *_encryptedGeoData;
    NSString *_captionText;
    NSString *_venueId;
    NSString *_attachmentUrl;
    CLLocation *_contentLocation;
    long long _viewLocation;
    long long _storyType;
    long long _storyTypeSpecific;
}

- (void).cxx_destruct;
- (id)_contentUsernameForStory:(id)arg1;
- (id)_groupConversationIdForStory:(id)arg1;
- (int)_launchSourceForStory:(id)arg1 friendStories:(id)arg2 isStoryShare:(_Bool)arg3 viewLocation:(long long)arg4;
@property(readonly, nonatomic) NSString *attachmentUrl; // @synthesize attachmentUrl=_attachmentUrl;
@property(readonly, nonatomic) NSString *captionText; // @synthesize captionText=_captionText;
@property(readonly, nonatomic) NSString *clientId; // @synthesize clientId=_clientId;
@property(readonly, nonatomic) CLLocation *contentLocation; // @synthesize contentLocation=_contentLocation;
@property(readonly, nonatomic) NSString *contentUsername; // @synthesize contentUsername=_contentUsername;
@property(readonly, nonatomic) SCContextContextHint *contextHint; // @synthesize contextHint=_contextHint;
@property(readonly, nonatomic) NSString *encryptedGeoData; // @synthesize encryptedGeoData=_encryptedGeoData;
@property(readonly, nonatomic) long long filterId; // @synthesize filterId=_filterId;
@property(readonly, nonatomic) NSString *groupRecipientConversationId; // @synthesize groupRecipientConversationId=_groupRecipientConversationId;
@property(readonly, nonatomic) _Bool hasFilter; // @synthesize hasFilter=_hasFilter;
- (id)initWithStory:(id)arg1 friendStories:(id)arg2 properties:(id)arg3 isStoryShare:(_Bool)arg4;
- (id)initWithStorySnap:(id)arg1 storiesPlaybackSequence:(id)arg2 customStoryMetadata:(id)arg3 myUsername:(id)arg4 properties:(id)arg5 isStoryShare:(_Bool)arg6;
@property(readonly, nonatomic) _Bool isShareable; // @synthesize isShareable=_isShareable;
@property(readonly, nonatomic) int launchSource; // @synthesize launchSource=_launchSource;
@property(readonly, nonatomic) long long lensId; // @synthesize lensId=_lensId;
@property(readonly, nonatomic) _Bool replyEnabled; // @synthesize replyEnabled=_replyEnabled;
@property(readonly, nonatomic) NSString *singleRecipientDisplayName; // @synthesize singleRecipientDisplayName=_singleRecipientDisplayName;
@property(readonly, nonatomic) NSString *storyId; // @synthesize storyId=_storyId;
@property(readonly, nonatomic) long long storyType; // @synthesize storyType=_storyType;
@property(readonly, nonatomic) long long storyTypeSpecific; // @synthesize storyTypeSpecific=_storyTypeSpecific;
@property(readonly, nonatomic) NSString *venueId; // @synthesize venueId=_venueId;
@property(readonly, nonatomic) long long viewLocation; // @synthesize viewLocation=_viewLocation;

@end

