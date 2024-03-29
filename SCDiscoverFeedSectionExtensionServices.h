//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface SCDiscoverFeedSectionExtensionServices : NSObject
{
    NSDictionary *_collectionViewSectionCreators;
    NSDictionary *_localSectionDescriptorProviders;
    NSDictionary *_remoteSectionProviders;
    NSDictionary *_loggingParsers;
    NSDictionary *_dataMutators;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *collectionViewSectionCreators; // @synthesize collectionViewSectionCreators=_collectionViewSectionCreators;
@property(readonly, nonatomic) NSDictionary *dataMutators; // @synthesize dataMutators=_dataMutators;
- (id)initWithSectionExtensions:(id)arg1;
@property(readonly, nonatomic) NSDictionary *localSectionDescriptorProviders; // @synthesize localSectionDescriptorProviders=_localSectionDescriptorProviders;
@property(readonly, nonatomic) NSDictionary *loggingParsers; // @synthesize loggingParsers=_loggingParsers;
@property(readonly, nonatomic) NSDictionary *remoteSectionProviders; // @synthesize remoteSectionProviders=_remoteSectionProviders;

@end

