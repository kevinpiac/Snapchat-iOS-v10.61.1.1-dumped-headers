//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIActivityItemProvider.h>

@class NSArray, NSObject, NSString, NSURL, SCGalleryUserContext, SCUserSession;
@protocol OS_dispatch_semaphore, SCGalleryActivityItemProviderDelegate;

@interface SCGalleryActivityItemProvider : UIActivityItemProvider
{
    id _item;
    NSObject<OS_dispatch_semaphore> *_itemSemaphore;
    NSURL *_itemURL;
    _Bool _uploadToYouTube;
    float _progressWeight;
    SCGalleryUserContext *_userContext;
    SCUserSession *_userSession;
    id <SCGalleryActivityItemProviderDelegate> _delegate;
    NSArray *_skippedActivityTypes;
    NSString *_designatedActivityType;
    long long _spectaclesExportFormat;
}

- (void).cxx_destruct;
- (void)dealloc;
@property(nonatomic) __weak id <SCGalleryActivityItemProviderDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *designatedActivityType; // @synthesize designatedActivityType=_designatedActivityType;
- (void)didGenerateItem:(id)arg1;
- (id)initWithPlaceholderItem:(id)arg1;
- (id)item;
@property(nonatomic) float progressWeight; // @synthesize progressWeight=_progressWeight;
@property(copy, nonatomic) NSArray *skippedActivityTypes; // @synthesize skippedActivityTypes=_skippedActivityTypes;
@property(nonatomic) long long spectaclesExportFormat; // @synthesize spectaclesExportFormat=_spectaclesExportFormat;
@property(nonatomic) _Bool uploadToYouTube; // @synthesize uploadToYouTube=_uploadToYouTube;
@property(retain, nonatomic) SCGalleryUserContext *userContext; // @synthesize userContext=_userContext;
@property(retain, nonatomic) SCUserSession *userSession; // @synthesize userSession=_userSession;

@end

