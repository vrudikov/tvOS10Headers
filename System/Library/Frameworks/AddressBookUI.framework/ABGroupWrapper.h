/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:44 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, ACAccountStore, NSSet;

@interface ABGroupWrapper : NSObject {

	void* _addressBook;
	NSString* _accountIdentifier;
	void* _source;
	void* _group;
	NSString* _cachedName;
	ACAccountStore* _accountStore;
	id _delegate;
	BOOL _shouldBeSelectedWhenAllChildrenAreSelected;
	BOOL _selected;
	NSSet* _childGroupWrappers;
	ABGroupWrapper* _parentGroupWrapper;

}

@property (nonatomic,readonly) NSString * _accountDescriptionBasedOnIdentifier; 
@property (nonatomic,readonly) NSString * accountIdentifier;                                 //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) void* addressBook;                                            //@synthesize addressBook=_addressBook - In the implementation block
@property (nonatomic,readonly) void* source;                                                 //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) void* group;                                                  //@synthesize group=_group - In the implementation block
@property (nonatomic,retain) NSSet * childGroupWrappers;                                     //@synthesize childGroupWrappers=_childGroupWrappers - In the implementation block
@property (assign,nonatomic) BOOL shouldBeSelectedWhenAllChildrenAreSelected;                //@synthesize shouldBeSelectedWhenAllChildrenAreSelected=_shouldBeSelectedWhenAllChildrenAreSelected - In the implementation block
@property (assign,nonatomic) ABGroupWrapper * parentGroupWrapper;                            //@synthesize parentGroupWrapper=_parentGroupWrapper - In the implementation block
@property (assign,getter=isSelected,nonatomic) BOOL selected;                                //@synthesize selected=_selected - In the implementation block
@property (assign,nonatomic) id<ABGroupWrapperDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) int sourceType; 
@property (nonatomic,retain) ACAccountStore * accountStore;                                  //@synthesize accountStore=_accountStore - In the implementation block
+(id)newGroupWrappersWithAccountIdentifier:(id)arg1 addressBook:(void*)arg2 accountStore:(id)arg3 excludingSearchableStores:(BOOL)arg4 isSoleAccount:(BOOL)arg5 ;
+(id)newGroupWrappersWithAccountIdentifier:(id)arg1 addressBook:(void*)arg2 accountStore:(id)arg3 ;
+(id)newGroupWrappersWithAccountIdentifier:(id)arg1 addressBook:(void*)arg2 ;
+(id)newGroupWrappersWithAccountIdentifier:(id)arg1 addressBook:(void*)arg2 excludingSearchableStores:(BOOL)arg3 ;
+(id)newGroupWrapperFromDictionaryRepresentation:(id)arg1 withAddressBook:(void*)arg2 ;
-(void)setDelegate:(id<ABGroupWrapperDelegate>)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id<ABGroupWrapperDelegate>)delegate;
-(NSString *)name;
-(BOOL)isSelected;
-(void)setSelected:(BOOL)arg1 ;
-(int)sourceType;
-(void*)source;
-(void*)group;
-(long long)score;
-(BOOL)isDirectoryWrapper;
-(ABGroupWrapper *)parentGroupWrapper;
-(void)setParentGroupWrapper:(ABGroupWrapper *)arg1 ;
-(void)setChildGroupWrappers:(NSSet *)arg1 ;
-(void)setShouldBeSelectedWhenAllChildrenAreSelected:(BOOL)arg1 ;
-(long long)compareToGroupWrapper:(id)arg1 ;
-(BOOL)toggleSelection;
-(BOOL)isGlobalWrapper;
-(id)copyDictionaryRepresentation;
-(id)initWithAddressBook:(void*)arg1 accountIdentifier:(id)arg2 source:(void*)arg3 group:(void*)arg4 ;
-(NSString *)_accountDescriptionBasedOnIdentifier;
-(void)childGroupWrapper:(id)arg1 didBecomeSelected:(BOOL)arg2 ;
-(void)setSelected:(BOOL)arg1 propagateSelectionToChildren:(BOOL)arg2 ;
-(id)_rootGroupWrapper;
-(BOOL)showLinkedPeople;
-(BOOL)isContainerWrapper;
-(NSSet *)childGroupWrappers;
-(BOOL)shouldBeSelectedWhenAllChildrenAreSelected;
-(NSString *)accountIdentifier;
-(void)setAccountStore:(ACAccountStore *)arg1 ;
-(void*)addressBook;
-(ACAccountStore *)accountStore;
@end

