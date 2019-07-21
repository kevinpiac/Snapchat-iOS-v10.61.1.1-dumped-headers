//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCGalleryOperaConfiguration : NSObject
{
    _Bool _isFeatured;
    _Bool _isFromStoryV2Tab;
    _Bool _shouldShowAddressOnChrome;
    unsigned long long _browseStyle;
}

- (_Bool)_shouldEnableHorizontalAutoPageAnimation;
@property(readonly, nonatomic) unsigned long long browseStyle; // @synthesize browseStyle=_browseStyle;
- (id)initWithBrowseStyle:(unsigned long long)arg1;
- (id)initWithBrowseStyle:(unsigned long long)arg1 isFromStoryV2Tab:(_Bool)arg2 isFeatured:(_Bool)arg3 shouldShowAddressOnChrome:(_Bool)arg4;
@property(readonly, nonatomic) _Bool isFeatured; // @synthesize isFeatured=_isFeatured;
@property(readonly, nonatomic) _Bool isFromStoryV2Tab; // @synthesize isFromStoryV2Tab=_isFromStoryV2Tab;
- (void)setupDefaultOperaConfiguration:(id)arg1 userSession:(id)arg2;
@property(readonly, nonatomic) _Bool shouldShowAddressOnChrome; // @synthesize shouldShowAddressOnChrome=_shouldShowAddressOnChrome;

@end

