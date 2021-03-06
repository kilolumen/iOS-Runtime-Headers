/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDFitnessFriendsContactsManager : NSObject <HDFitnessFriendsManagerReadyObserver> {
    CNContactStore * _contactStore;
    NSMutableDictionary * _contactsByUUID;
    NSObject<OS_dispatch_queue> * _contactsQueue;
    NSObject<OS_dispatch_group> * _contactsTransactionBarrier;
    NSObject<OS_dispatch_queue> * _observerQueue;
    NSHashTable * _observers;
    NSObject<OS_dispatch_queue> * _persistQueue;
    NSMutableDictionary * _placeholderContactsByUUID;
}

@property (nonatomic, copy) NSSet *contacts;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) NSSet *placeholderContacts;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_beginTransaction;
- (id)_contactStoreContactWithIdentifier:(id)arg1;
- (void)_endTransaction;
- (id)_findMatchingContactStoreContactForDestinations:(id)arg1;
- (void)_notifyObservers;
- (void)_persistContacts;
- (void)_setContacts:(id)arg1 waitForTransaction:(BOOL)arg2;
- (void)_waitForTransaction;
- (void)addObserver:(id)arg1;
- (id)contactMatchingCriteriaBlock:(id /* block */)arg1;
- (id)contactWithDestinations:(id)arg1;
- (id)contactWithUUID:(id)arg1;
- (id)contacts;
- (id)createContactWithDestinations:(id)arg1;
- (id)init;
- (id)placeholderContactWithUUID:(id)arg1;
- (id)placeholderContacts;
- (void)removeAllPlaceholderContacts;
- (void)removeObserver:(id)arg1;
- (void)removePlaceholderContactWithToken:(id)arg1;
- (void)saveContact:(id)arg1;
- (id)savePlaceholderContact:(id)arg1;
- (void)setContacts:(id)arg1;
- (void)setContactsUsingTransaction:(id /* block */)arg1;

@end
