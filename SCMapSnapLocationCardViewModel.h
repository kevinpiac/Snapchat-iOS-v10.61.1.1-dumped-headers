//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCMediaCardViewModel.h"

@class FriendStories, NSString, NSURL, SCMTThumbnail;

@interface SCMapSnapLocationCardViewModel : SCMediaCardViewModel
{
    _Bool _showsPinIcon;
    _Bool _showsPinAccessory;
    _Bool _showsThumbnailLoadingSpinner;
    NSURL *_mapDeepLink;
    FriendStories *_friendStories;
    SCMTThumbnail *_thumbnail;
    NSString *_messageId;
    NSString *_conversationId;
}

+ (id)viewModelWithTitle:(id)arg1 subtitle:(id)arg2 isGrayScale:(_Bool)arg3 mapDeepLink:(id)arg4 friendStories:(id)arg5 thumbnail:(id)arg6;
+ (id)viewModelWithTitle:(id)arg1 subtitle:(id)arg2 mapDeepLink:(id)arg3;
- (void).cxx_destruct;
- (id)accessoryIcon;
@property(retain, nonatomic) NSString *conversationId; // @synthesize conversationId=_conversationId;
- (id)defaultThumbnailImage;
@property(readonly, nonatomic) FriendStories *friendStories; // @synthesize friendStories=_friendStories;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 isGrayScale:(_Bool)arg3 showsPinIcon:(_Bool)arg4 showsPinAccessory:(_Bool)arg5 mapDeepLink:(id)arg6 friendStories:(id)arg7 thumbnail:(id)arg8 showsThumbnailLoadingSpinner:(_Bool)arg9;
- (_Bool)isCircularThumbnail;
@property(readonly, copy, nonatomic) NSURL *mapDeepLink; // @synthesize mapDeepLink=_mapDeepLink;
@property(retain, nonatomic) NSString *messageId; // @synthesize messageId=_messageId;
@property(readonly, nonatomic) _Bool showsThumbnailLoadingSpinner; // @synthesize showsThumbnailLoadingSpinner=_showsThumbnailLoadingSpinner;
@property(readonly, copy, nonatomic) SCMTThumbnail *thumbnail; // @synthesize thumbnail=_thumbnail;
- (long long)type;

@end

