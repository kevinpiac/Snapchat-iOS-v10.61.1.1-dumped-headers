//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCContextV2ContextInfoProvider-Protocol.h"

@class CLLocation, EphemeralMedia, FriendStories, NSArray, NSMutableArray, NSString, SCContextContextHint, SCContextSession, SCLensSbSnappableMessage, SCStoriesSnapPlaybackMetadata, Snap, Story;

@interface SCContextSessionParams : NSObject <SCContextV2ContextInfoProvider>
{
    NSString *_venueId;
    _Bool _hasFilter;
    _Bool _isFriendStorySnap;
    _Bool _replyEnabled;
    SCContextSession *_parentContextSession;
    NSMutableArray *_cardsProviders;
    FriendStories *_friendStories;
    _Bool _isContextDisabled;
    _Bool _shouldUseHorizontalSnapCTA;
    _Bool _shouldShowSendButton;
    int _launchSource;
    NSString *_id;
    NSString *_strategy;
    NSString *_requestContext;
    unsigned long long _contextDepth;
    NSString *_attachmentUrl;
    NSString *_contentUsername;
    long long _lensId;
    SCLensSbSnappableMessage *_lensMetadata;
    long long _filterId;
    NSString *_encryptedGeoData;
    NSString *_captionText;
    CLLocation *_contentLocation;
    SCContextContextHint *_contextHint;
    NSString *_unlockablesSnapInfo;
    NSString *_displayName;
    NSString *_timestamp;
    CLLocation *_userLocation;
    long long _viewLocation;
    EphemeralMedia *_ephemeralMedia;
    Story *_story;
    SCStoriesSnapPlaybackMetadata *_storySnap;
    Snap *_snap;
    long long _storyType;
    long long _storyTypeSpecific;
    NSString *_storyId;
    NSString *_storySnapId;
    NSString *_chatMessageId;
    long long _chatMediaType;
    NSString *_oneOnOneConversationId;
    NSString *_groupChatConversationId;
    NSString *_chatSenderUsername;
    NSString *_singleRecipientDisplayName;
    NSString *_baseMediaMessageId;
    NSString *_gallerySnapId;
    NSString *_teamSnapchatMassSnapIdHash;
}

+ (id)_contextHintAsString:(int)arg1;
+ (id)launchSourceAsString:(int)arg1;
+ (id)webPageTitleForAttachment:(id)arg1;
- (void).cxx_destruct;
- (_Bool)_atMaxDepth;
- (_Bool)_cardProvidersAvailable;
- (void)_configureCommonProperties:(id)arg1;
- (void)_configureStoryProperties:(id)arg1;
- (_Bool)_couldMakeRequest;
- (_Bool)_couldMakeRequestForAttachment;
- (_Bool)_isReplyEnabledForLaunchSource:(int)arg1;
- (_Bool)_parentSessionMatchesVenueId;
- (int)_snapViewingContext;
- (void)addCardsProvider:(id)arg1;
- (id)arrowText:(id)arg1;
@property(readonly, nonatomic) NSString *attachmentUrl; // @synthesize attachmentUrl=_attachmentUrl;
@property(readonly, nonatomic) NSString *baseMediaMessageId; // @synthesize baseMediaMessageId=_baseMediaMessageId;
@property(readonly, nonatomic) NSString *captionText; // @synthesize captionText=_captionText;
@property(readonly, nonatomic) NSArray *cardsProviders;
@property(readonly, nonatomic) long long chatMediaType; // @synthesize chatMediaType=_chatMediaType;
@property(readonly, nonatomic) NSString *chatMessageId; // @synthesize chatMessageId=_chatMessageId;
@property(readonly, nonatomic) NSString *chatSenderUsername; // @synthesize chatSenderUsername=_chatSenderUsername;
@property(readonly, nonatomic) CLLocation *contentLocation; // @synthesize contentLocation=_contentLocation;
@property(readonly, nonatomic) NSString *contentUsername; // @synthesize contentUsername=_contentUsername;
@property(readonly, nonatomic) unsigned long long contextDepth; // @synthesize contextDepth=_contextDepth;
@property(readonly, nonatomic) SCContextContextHint *contextHint; // @synthesize contextHint=_contextHint;
@property(readonly, nonatomic) _Bool couldMakeRequest;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, nonatomic) NSString *encryptedGeoData; // @synthesize encryptedGeoData=_encryptedGeoData;
@property(readonly, nonatomic) EphemeralMedia *ephemeralMedia; // @synthesize ephemeralMedia=_ephemeralMedia;
@property(readonly, nonatomic) long long filterId; // @synthesize filterId=_filterId;
@property(readonly, nonatomic) NSString *gallerySnapId; // @synthesize gallerySnapId=_gallerySnapId;
@property(readonly, nonatomic) NSString *groupChatConversationId; // @synthesize groupChatConversationId=_groupChatConversationId;
@property(readonly, nonatomic) _Bool hasCardsToShow;
@property(readonly, nonatomic) _Bool hasFilter; // @synthesize hasFilter=_hasFilter;
@property(readonly, nonatomic) _Bool hasSwipeUpContent;
@property(readonly, nonatomic) NSString *id; // @synthesize id=_id;
- (id)initWithChatMedia:(id)arg1 message:(id)arg2 properties:(id)arg3;
- (id)initWithContextSessionParams:(id)arg1 queryForOverrides:(id)arg2;
- (id)initWithMemoriesSnap:(id)arg1 detail:(id)arg2 location:(id)arg3 properties:(id)arg4;
- (id)initWithParentContextSession:(id)arg1;
- (id)initWithStory:(id)arg1 friendStories:(id)arg2 properties:(id)arg3 parentContextSession:(id)arg4 isStoryShare:(_Bool)arg5;
- (id)initWithStoryParams:(id)arg1 properties:(id)arg2 parentContextSession:(id)arg3;
- (id)initWithStorySnap:(id)arg1 storiesPlaybackSequence:(id)arg2 customStoryMetadata:(id)arg3 myUsername:(id)arg4 properties:(id)arg5 isStoryShare:(_Bool)arg6;
- (id)initWithStorySnapMedia:(id)arg1 properties:(id)arg2 parentContextSession:(id)arg3;
@property(readonly, nonatomic) _Bool isContextDisabled; // @synthesize isContextDisabled=_isContextDisabled;
- (_Bool)isDirectOrGroupSnap;
- (_Bool)isGroupMessage;
@property(readonly, nonatomic) int launchSource; // @synthesize launchSource=_launchSource;
@property(readonly, nonatomic) long long lensId; // @synthesize lensId=_lensId;
@property(readonly, nonatomic) SCLensSbSnappableMessage *lensMetadata; // @synthesize lensMetadata=_lensMetadata;
@property(readonly, nonatomic) NSString *oneOnOneConversationId; // @synthesize oneOnOneConversationId=_oneOnOneConversationId;
@property(readonly, nonatomic) _Bool replyEnabled;
- (id)replyUsername;
@property(readonly, nonatomic) NSString *requestContext; // @synthesize requestContext=_requestContext;
- (void)setContextProperties:(id)arg1;
@property(readonly, nonatomic) _Bool shouldOpenDirectlyToChat;
@property(readonly, nonatomic) _Bool shouldShowSendButton; // @synthesize shouldShowSendButton=_shouldShowSendButton;
@property(readonly, nonatomic) _Bool shouldUseHorizontalSnapCTA; // @synthesize shouldUseHorizontalSnapCTA=_shouldUseHorizontalSnapCTA;
@property(readonly, nonatomic) NSString *singleRecipientDisplayName; // @synthesize singleRecipientDisplayName=_singleRecipientDisplayName;
@property(readonly, nonatomic) Snap *snap; // @synthesize snap=_snap;
- (id)snapContextInfo;
- (id)snapIdentity;
@property(readonly, nonatomic) Story *story; // @synthesize story=_story;
@property(readonly, nonatomic) NSString *storyId; // @synthesize storyId=_storyId;
@property(readonly, nonatomic) SCStoriesSnapPlaybackMetadata *storySnap; // @synthesize storySnap=_storySnap;
@property(readonly, nonatomic) NSString *storySnapId; // @synthesize storySnapId=_storySnapId;
@property(readonly, nonatomic) long long storyType; // @synthesize storyType=_storyType;
@property(readonly, nonatomic) long long storyTypeSpecific; // @synthesize storyTypeSpecific=_storyTypeSpecific;
@property(readonly, nonatomic) NSString *strategy; // @synthesize strategy=_strategy;
- (unsigned long long)swipeUpIndicatorType;
- (id)teamSnapchatIdHash;
@property(readonly, nonatomic) NSString *teamSnapchatMassSnapIdHash; // @synthesize teamSnapchatMassSnapIdHash=_teamSnapchatMassSnapIdHash;
@property(readonly, nonatomic) NSString *timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, nonatomic) long long unifiedMediaType;
@property(readonly, nonatomic) NSString *unlockablesSnapInfo; // @synthesize unlockablesSnapInfo=_unlockablesSnapInfo;
@property(readonly, nonatomic) CLLocation *userLocation; // @synthesize userLocation=_userLocation;
@property(readonly, nonatomic) NSString *venueId;
@property(readonly, nonatomic) long long viewLocation; // @synthesize viewLocation=_viewLocation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

