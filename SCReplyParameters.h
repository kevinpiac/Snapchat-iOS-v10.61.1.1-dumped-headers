//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface SCReplyParameters : NSObject
{
    _Bool _isMischief;
    _Bool _addToMyStory;
    _Bool _isMobStory;
    _Bool _isDoubleTap;
    _Bool _isBirthday;
    _Bool _isFromContextMenu;
    _Bool _addToOurStory;
    _Bool _isBottomSnapCamera;
    _Bool _shouldHideRecipientNameView;
    _Bool _isPreviewSavingDisabled;
    _Bool _isLensChallenge;
    NSString *_replyUsername;
    NSString *_replyDisplayName;
    long long _replyType;
    unsigned long long _replyStateType;
    NSString *_context;
    long long _pageSource;
    NSString *_placeID;
    NSString *_placeName;
    NSNumber *_cellViewPosition;
    NSString *_businessProfileId;
    long long _roleType;
    NSString *_appStoryAppId;
}

+ (id)_replyParametersWithContextSessionParameters:(id)arg1 shouldHideRecipientNameView:(_Bool)arg2;
+ (id)snappableParametersWithContextSessionParameters:(id)arg1;
+ (id)snappableParametersWithOperaParameters:(id)arg1;
+ (id)socailUnlockParametersWithContextSessionParameters:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool addToMyStory; // @synthesize addToMyStory=_addToMyStory;
@property(nonatomic) _Bool addToOurStory; // @synthesize addToOurStory=_addToOurStory;
@property(copy, nonatomic) NSString *appStoryAppId; // @synthesize appStoryAppId=_appStoryAppId;
@property(copy, nonatomic) NSString *businessProfileId; // @synthesize businessProfileId=_businessProfileId;
@property(copy, nonatomic) NSNumber *cellViewPosition; // @synthesize cellViewPosition=_cellViewPosition;
@property(copy, nonatomic) NSString *context; // @synthesize context=_context;
@property(nonatomic) _Bool isBirthday; // @synthesize isBirthday=_isBirthday;
@property(nonatomic) _Bool isBottomSnapCamera; // @synthesize isBottomSnapCamera=_isBottomSnapCamera;
@property(nonatomic) _Bool isDoubleTap; // @synthesize isDoubleTap=_isDoubleTap;
@property(nonatomic) _Bool isFromContextMenu; // @synthesize isFromContextMenu=_isFromContextMenu;
@property(nonatomic) _Bool isLensChallenge; // @synthesize isLensChallenge=_isLensChallenge;
@property(nonatomic) _Bool isMischief; // @synthesize isMischief=_isMischief;
- (_Bool)isMischiefSnap;
@property(nonatomic) _Bool isMobStory; // @synthesize isMobStory=_isMobStory;
@property(nonatomic) _Bool isPreviewSavingDisabled; // @synthesize isPreviewSavingDisabled=_isPreviewSavingDisabled;
@property(nonatomic) long long pageSource; // @synthesize pageSource=_pageSource;
@property(copy, nonatomic) NSString *placeID; // @synthesize placeID=_placeID;
@property(copy, nonatomic) NSString *placeName; // @synthesize placeName=_placeName;
@property(copy, nonatomic) NSString *replyDisplayName; // @synthesize replyDisplayName=_replyDisplayName;
@property(nonatomic) unsigned long long replyStateType; // @synthesize replyStateType=_replyStateType;
@property(nonatomic) long long replyType; // @synthesize replyType=_replyType;
@property(copy, nonatomic) NSString *replyUsername; // @synthesize replyUsername=_replyUsername;
@property(nonatomic) long long roleType; // @synthesize roleType=_roleType;
@property(nonatomic) _Bool shouldHideRecipientNameView; // @synthesize shouldHideRecipientNameView=_shouldHideRecipientNameView;

@end

