//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface SCDiscoverFeedManagementSettingConfig : NSObject <NSCopying>
{
    _Bool _hasSearchView;
    NSString *_title;
    NSString *_subtitle;
    unsigned long long _fullScreenDataProviderEnum;
    unsigned long long _headerButton;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) unsigned long long fullScreenDataProviderEnum; // @synthesize fullScreenDataProviderEnum=_fullScreenDataProviderEnum;
@property(readonly, nonatomic) _Bool hasSearchView; // @synthesize hasSearchView=_hasSearchView;
- (unsigned long long)hash;
@property(readonly, nonatomic) unsigned long long headerButton; // @synthesize headerButton=_headerButton;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 hasSearchView:(_Bool)arg3 fullScreenDataProviderEnum:(unsigned long long)arg4 headerButton:(unsigned long long)arg5;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;

@end

