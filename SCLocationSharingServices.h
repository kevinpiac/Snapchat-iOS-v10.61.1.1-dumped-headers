//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCLazy;

@interface SCLocationSharingServices : NSObject
{
    SCLazy *_preferencesMutator;
    SCLazy *_preferencesProvider;
    SCLazy *_sharingService;
}

- (void).cxx_destruct;
- (id)initWithPreferencesMutator:(id)arg1 preferencesProvider:(id)arg2 sharingService:(id)arg3;
@property(readonly, nonatomic) SCLazy *preferencesMutator; // @synthesize preferencesMutator=_preferencesMutator;
@property(readonly, nonatomic) SCLazy *preferencesProvider; // @synthesize preferencesProvider=_preferencesProvider;
@property(readonly, nonatomic) SCLazy *sharingService; // @synthesize sharingService=_sharingService;

@end

